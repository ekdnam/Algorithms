#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++){ 
        if (arr[i] == x){ 
            return i;
        }
    }
    return -1; 
} 
  
int main(void) 
{ 
    int n; //number of elements in array
    cin >> n;
    int arr[n]; 
    //storing the elements in array 
    for(int i = 0 ; i<n ; i++){
      cin >> arr[i];
    }
    int x; //element to be searched
    cin >> x;
    int result = search(arr, n, x); 
    (result == -1)? cout << "Element is not present in array" 
                  : cout << "Element is present at index " << result; 
     return 0; 
}
