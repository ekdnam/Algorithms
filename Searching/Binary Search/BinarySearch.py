#iertative binary search v1

def binary_search(arr,low,high,target):

    while low<=high:
        mid = (high + low) // 2
        if arr[mid] < target: 
            low = mid + 1
        elif arr[mid] > target: 
            high = mid - 1
        else: 
            return mid
    
    return -1




if __name__=="__main__":

    n = int(input("Number of elements: "))
    arr = list(map(int, input("Enter the elements: \n").split()))
    target = int(input("Enter element to be found: "))

    arr.sort()

    print("Sorted elements: {}".format(arr))
    index = binary_search(arr, 0, n-1, target)

    if index==-1:
        print("Element not found.")
    else:
        print("Element found at position: {}".format(index))