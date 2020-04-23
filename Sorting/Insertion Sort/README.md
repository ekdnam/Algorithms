## Insertion Sort
Insertion sort works the way many people sort a hand of playing cards. We start
with an empty left hand and the cards face down on the table. We then remove one card at a
time from the table and insert it into the correct position in the left hand. To find the correct
position for a card, we compare it with each of the cards already in the hand, from right to
left. At all times, the cards held in the left hand are sorted, and
these cards were originally the top cards of the pile on the table.

## Pseudocode
INSERTION-SORT(A)

for j ← 2 to length[A]

do key ← A[j]

▹ Insert A[j] into the sorted sequence A[1  j - 1].

i ← j - 1

while i > 0 and A[i] > key

do A[i + 1] ← A[i]

i ← i - 1

A[i + 1] ← key

## Time and space compexity:
Worst case time complexity: O(n^2)

Average case time complexity: O(n^2)

Best case time complexity: O(n)

Worst case and average case time complexity is because of the two for loops and occurs when list is unsorted.

Best case time complexity occurs when the list is sorted.



## Time :
Number of elements: 1000

A) Unsorted list: 993500 ns

B) Sorted list: 4500 ns

## References
<a href = "https://www.geeksforgeeks.org/insertion-sort/">Geeks for Geeks</a>

CLRS
