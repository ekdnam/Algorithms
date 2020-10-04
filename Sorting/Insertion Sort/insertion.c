#include<stdio.h>

void insertionSort(int arr[], int n) 
{ 
    int i, k, j; 
    for (i = 1; i < n; i++) { 
        k = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > k) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = k; 
    } 
} 

void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

void main(){

   int i, j, c, t, arr[30];

   printf("Enter the total number of elements:");
   scanf("%d",&c);

   printf("Enter %d elements: ", c);

   for(i=0;i<c;i++)
      scanf("%d",&arr[i]);

  insertionSort(arr, c);
  printArray(arr, c);

}