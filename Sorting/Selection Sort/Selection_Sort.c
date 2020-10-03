#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int a[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (a[j] < a[min_idx]) 
            min_idx = j;  
        swap(&a[min_idx], &a[i]); 
    } 
} 
void printArray(int a[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
} 
  

int main() 
{ 
    int a[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(a)/sizeof(a[0]); 
    selectionSort(a, n); 
    printf("Sorted array: \n"); 
    printArray(a, n); 
    return 0; 
} 