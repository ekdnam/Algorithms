/*
A Linear Search is also called Sequential Search .
Linear search is used on a collections of items. 
It is a method for finding an element within a list.
It sequentially checks each element of the list until a match is found or the whole list has been searched.
On an average, the number of comparision will be (n+1)/2
The worst case efficiency of this algorithm is O(n)
*/

// Code for Linear Search in C:

#include <stdio.h>
int main()
{
  int array[100], search, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)    
    {
      printf("Element Found! \n%d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("Element Not Found! \n%d isn't present in the array.\n", search);

  return 0;
}

/* Output:
Enter number of elements in array
5
Enter 5 integer(s)
1 2 3 4 5
Enter a number to search
6
Element Not Found!
6 isn't present in the array.
*/
