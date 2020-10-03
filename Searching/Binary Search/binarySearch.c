#include <stdio.h> 
  
int binarySearch(int arr[], int left, int right, int x) 
{ 
    while (left <= right) { 
        int mid = left + (right - l) / 2; 
  
        if (arr[mid] > x) 
            right = mid - 1;
  
        if (arr[mid] < x) 
            left = mid + 1; 
  
        else
            return mid;
             
    } 
  
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present"
                            " in array") 
                   : printf("Element is present at "
                            "index %d", 
                            result); 
    return 0; 
} 