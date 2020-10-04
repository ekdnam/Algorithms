'''
Code for Bucket Sort in Python
@ Author : Sandip Dutta
'''

'''
About Bucket Sort
---------------------------------------------------------------
>   Bucket Sort is a non comparison based algorithm. That is 
    it does not compare between elements for Sorting. So we should
    know or have some assumptions about the array to be sorted.

>   Bucket Sort first places each element into a specific bucket.
    We can think of a bucket as a container which contains some similar
    elements based on a property.                                         

Eg : If we have an array [1, 3, 3, 8, 5] and our bucket condition is:
    " <= 3", then we will have the following buckets.

    Bucket 1 (element <= 3) : [1, 3, 3]
    Bucket 2 (element > 3) : [8, 5]

>   After placing into buckets, we will sort the buckets individually.
    (Generally insertion sort is used in this step)
>   Then we merge the buckets one by one, starting from the bucket with
    the smallest values.

>>  Runtime : O(n)
'''

# This numbers array is for default purposes. Uncomment to use.
# numbers = [0.2, 0.10, 0.32, 0.45, 0.36, 0.90, 0.82, 0.47, 0.71, 0.76, 0.28, 0.12]

from math import exp # For bucketting purposes


def bucketSort(numbers):
    ''' Implements Bucket Sort Algorithm, and returns the sorted array
    @ Args:
        > numbers(list) - The list to be sorted by bucket sort
    @ Return:
        > sortedNumbers(list) - Sorted Version of arr
    '''

    # here we will split into 11 buckets    
    numberOfBuckets = 11

    sortedNumbers = []  # The final array to be returned

    allBuckets = {i:[] for i in range(numberOfBuckets)} # Stores all the buckets

    # Bucketing Scheme:
    # numbers[element] --> (numberOfBuckets - 1) / (1.0 + exp(-element))
    # This squishes all inputs in the range [0, 10]

    # Bucket Here
    for element in numbers:
        bucketNumber = int((numberOfBuckets - 1) / (1.0 + exp(-element))) 
        allBuckets[bucketNumber].append(element)
    
    # Make final list using the buckets
    # In Python(from 3.7), the values are retrieved from the dictionary 
    # in the order that they were inserted. So we get the values sequentially
    # which is necessary for Bucket Sort
    for bucket in allBuckets.values():
        bucket.sort()  ## Sort the buckets individually
        sortedNumbers.extend(bucket)  ## Put in final List
    
    return sortedNumbers

# testing Code

if __name__ == "__main__":

    ## numbers is our array
    numbers = input("Enter numbers, with spaces in between. Once array is created, press Enter: ")
    numbers = numbers.split(" ")
    numbers = list(map(float, numbers))  ## Convert to list of floats

    print(bucketSort(numbers))
