#include <stdio.h> 
#include <stdlib.h>

void swap(int *xp, int *yp){ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int *arr, int n){ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) { 
        min_idx = i; 
        for (j = i+1; j < n; j++){ 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        }
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  
void printArray(int *arr, int size){ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

void input(int *arr, int n){
    printf("Elements: ");
    for (int i=0; i<n; ++i){
		scanf("%d",&arr[i]);
    }
}

int main() 
{ 
    int *arr, NoOfElements;
    printf("Number of elements: ");
	scanf("%d",&NoOfElements);
    arr=(int*)malloc(NoOfElements*sizeof(int));

    input(arr, NoOfElements);

    selectionSort(arr, NoOfElements); 
    printf("Sorted array is: \n"); 
    printArray(arr, NoOfElements); 
    return 0; 
} 