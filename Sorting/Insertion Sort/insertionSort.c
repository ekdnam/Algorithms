#include <stdlib.h> 
#include <stdio.h> 
  
void insertionSort(int *arr, int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 

void input(int *arr, int n){
    printf("Elements: ");
    for (int i=0; i<n; ++i){
		scanf("%d",&arr[i]);
    }
}
  
void printArray(int *arr, int n){ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main(){

    int *arr, NoOfElements;
    printf("Number of elements: ");
	scanf("%d",&NoOfElements);
    arr=(int*)malloc(NoOfElements*sizeof(int));

    input(arr, NoOfElements);

    insertionSort(arr, NoOfElements); 
    printf("Sorted array is: \n"); 
    printArray(arr, NoOfElements); 

    return 0; 
}