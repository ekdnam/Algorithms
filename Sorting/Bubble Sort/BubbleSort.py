def bubbleSort(array):
    sizeOfArray = len(array)

    # Traverse through all array elements
    for i in range(sizeOfArray - 1):
        # range(n) also work but outer loop will repeat one time more than needed.

        # Last i elements are already in place
        for j in range(0, sizeOfArray - i - 1):

            # traverse the array from 0 to sizeOfArray-index-1
            # Swap if the element found is greater
            # than the next element
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]


# Driver code to test above
print("Enter the Array:")
arr = [int(x) for x in input().split()]
bubbleSort(arr)

print("Sorted array is:")
for i in range(len(arr)):
    print("%d" % arr[i])