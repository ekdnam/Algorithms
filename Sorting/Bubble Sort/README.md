# Bubble Sort

Bubble Sort is a sorting algorithm which continuously swaps adjacent elements of a list till a completely sorted list is obtained.

## Pseudo code:
BUBBLESORT(A)

for i ← 1 to length[A]

do for j ← length[A] downto i + 1

do if A[j] < A[j - 1]

then exchange A[j] ↔ A[j - 1]

## Time complexity and space complexity
Worst case time complexity: O(n^2)
Average case time complexity: O(n^2)
Best case time complexity: O(n)

Worst case and average case time complexity is O(n^2) as a result of the two for loops and the list is unsorted.
Best case time complexity occcurs when the list is already sorted.

The space complexity is O(1)

## Optimized bubble sort
If in an iteration no swapping occurs, this means that the list has been sorted, and thus the program stops.

## Comparison of time for the different bubble sorts

A) Number of elements: 1000 (List is unsorted)
  
Bubble Sort: 2737100 ns
  
Optimized Bubble Sort: 800 ns
  
  
B) Number of elements: 1000 (List is sorted)
  
Bubble Sort: 1207300 ns
  
Optimized Bubble Sort: 400 ns
  
  
C) Number of elements: 100 (List is unsorted)
  
Bubble Sort: 38300 ns
  
Optimized Bubble Sort: 1000 ns
  
  
D) Number of elements: 100 (List is sorted)
  
Bubble Sort: 15700 ns
  
Optimized Bubble Sort: 400 ns
  
## Conclusion: 
It can be seen that optimized bubble sort is much more time efficient in comparison with normal bubble sort.
