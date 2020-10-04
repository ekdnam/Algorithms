# What is Linear Search?
A Linear Search is the most basic type of searching algorithm. A Linear Search sequentially moves through your collection (or data structure) looking for a matching value. In other words, it looks down a list, one item at a time, without jumping.
Think of it as a way of finding your way in a phonebook. A Linear Search is starting at the beginning, reading every name until you find what you’re looking for. n complexity terms this is an O(n) search - the time taken to search the list, gets bigger at the same rate as the list does.

# Linear Search: Steps on how it works:
Here is simple approach is to do Linear Search:
Start from the leftmost element of array and one by one compare the element we are searching for with each element of the array.
If there is a match between the element we are searching for and an element of the array, return the index.
If there is no match between the element we are searching for and an element of the array, return -1.
A Linear Search Algorithm is a set of instructions that traverses/moves through a data set and checks every element in the set until it finds whatever value you have asked for or until the whole data set has been searched.
 
# Time Complexity Analysis- 
## Complexity of Linear Search Algorithm is O(n).Here, n is the number of elements in the linear array.

# Best case-
In the best possible case,
The element being searched may be found at the first position.
In this case, the search terminates in success with just one comparison.
Thus in best case, 
# Linear search algorithm takes O(1) operations.

# Worst Case-
In the worst possible case,
The element being searched may be present at the last position or not present in the array at all.
In the former case, the search terminates in success with n comparisons.
In the later case, the search terminates in failure with n comparisons.
Thus in worst case
# Linear search algorithm takes O(n) operations.


 
