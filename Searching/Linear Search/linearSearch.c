#include <stdio.h> 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    printf("Enter size of array");
    int n,x,i;
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    } 
    printf("Enter Element u want to search.");
    scanf("%d",&x);
    int result = search(arr, n, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 