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
  
# Test array 
array = [ 1, 6, 9, 20, 35 ] 
x = 20

# Calling 
result = binary_search(array, 0, len(array)-1, x) 

# Printing
found = (result != -1)
found_message = ("Found at index " + str(result)) if found else "Not found"
print(found_message)