# Binary search algorithm

def binary_search(array, low, high, x): 
    # returns index of found item, if not found returns -1
    if high >= low: 
        middle = (low + high) // 2

        # If element is present at the middle itself 
        if array[middle] == x: 
            return middle 
        elif array[middle] > x: 
            return binary_search(array, low, middle - 1, x) 
        else: 
            return binary_search(array, middle + 1, high, x) 
    else: 
        return -1


if __name__ == '__main__':
    array = []
    array_len = int(input("Enter number of elements in array, from lowest to highest:\n"))
    for x in range(array_len):
        array.append(int(input("Enter " + str(x+1) + " number:\n")))
    print(array)
    to_find = int(input("Enter number to be found:\n"))
    result = binary_search(array, 0, len(array)-1, to_find) 
    # Printing
    found_message = ("Found at index " + str(result)) if (result != -1) else "Not found"
    print(found_message)