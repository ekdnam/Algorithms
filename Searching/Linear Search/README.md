# DOCUMENTED BY : Aditi Jain (https://github.com/aditi597)


SUMMARY :

Linear Search is a searching algorithm which searches for an element in the array and returns if the element present in the array or not. The idea is to the find the element from the left-most part of the array to the right-most part and comparing each element with the search key(i.e., the element to be found).


SAMPLE INPUT AND OUTPUT :

Sample Input #1
array = [4,8,6,7,12,0]
search_key = 12
Sample Output #1
Yes

Sample Input #2
array = [45,7,8,10,3,2]
search_key = 12
Sample Output #2
No


PSEUDO-CODE :

linear_search (array, search_key)
   for each item in the array
      if item == search_key
         return the item's location or Yes or Both
      end if
   end for
end function


SPACE AND TIME COMPLEXITY :

The space complexity of Linear Search algorithm is O(n), where n is the size of the array.
The time complexity of this algorithm is O(n), since it takes n traversals to reach to the element.

BEST AND WORST CASE SITUATIONS :

The best case scenario is when the search key is located at the very first index ,where, the job will be done in just one iteration.
The worst case scenario is when the search key is located at the last index , where , it will take n iterations to reach.


LIMITATIONS : 

This algorithm has a time complexity of O(n), which is relatively slower than other Searching Algorithms( for instance, Binary Search or Hash tables). For the worst case scenario, the traversal will have to go through the array till the end, which is not ideal.