#include <bits/stdc++.h> 
using namespace std; 
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL)

long int LinearSearch(long int arr[], long int n , long int val) // function to return the element index..
{  
	for (int i = 0; i < n; i++) // loop to searched the value present in array or not..  
        if (arr[i] == val) 
            return i; 
    return -1; 
} 

int main() {
	long int TestCase; // number of testcase..
	cin>>TestCase;
	while(TestCase--){
		long int size;
		cin>>size;
		long int arr[size];   
   		for(int i=0; i<size; i++) cin>>arr[i];
   		long int val;
   		cin>>val;
		if(LinearSearch(arr, sizeof(arr), val) == -1) cout<<"NO\n" ; // if the value is  not present then print NO
        else cout<<" YES (index) : "<<LinearSearch(arr, sizeof(arr), val)<<"\n"; // else print YES and the index..
	}
   return 0; 
}
