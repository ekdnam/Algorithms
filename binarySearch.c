// binary search
#include <stdio.h>
#include<conio.h>
int Sort(int arr[],int len) // sorting function 
{ 
   int i, j,temp ; 
   for (i = 0; i < len-1; i++)       
      
       for (j = 0; j < len-i-1; j++)  
           if (arr[j] > arr[j+1]) {
           		temp=arr[j];
           		arr[j]=arr[j+1];
           		arr[j+1]=temp;
		   }
	return arr;
} 
int binarySearch(int sort_arr[], int low, int high, int value) {  // funtion for binary search..
    if (high >= low) { 
        int mid = low + (high - low) / 2;
        
		if (sort_arr[mid] == value) return mid; 
        
		if (sort_arr[mid] > value) return binarySearch(sort_arr, low, mid - 1, value); 
        
		else return binarySearch(sort_arr, mid + 1, high, value); 
    }  
    return -1; 
}
int main(){
	int size, value;
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &value);
	int sort_arr=Sort(arr,size);
	if(binarySearch(sort_arr, 0, size-1, value)==-1) printf("NO\n");
	else printf("YES (index) : %d",binarySearch(sort_arr, 0, size-1, value));
	getch ;
}
