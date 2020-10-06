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
    // Taking number of Elements in the array from the user
    printf("Number of elements: ");
	scanf("%d",&NoOfElements);
    arr=(int*)malloc(NoOfElements*sizeof(int));

    //calling input function which will take elements of array from the user
    input(arr, NoOfElements);

    //callling function insertionSort which will sort the array using insertionSort
    insertionSort(arr, NoOfElements); 
    printf("Sorted array is: \n"); 
    //Printing sorted array
    printArray(arr, NoOfElements); 

    return 0; 
}