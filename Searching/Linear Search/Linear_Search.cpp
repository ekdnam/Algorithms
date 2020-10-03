#include<bits/stdc++.h>
using namespace std;
 int n;
 int linear_search(int x,int arr[])
 {
     for(int i=0;i<n;i++)
     {
         if(x==arr[i])
            return 1;
     }
     return 0;
 }
int main()
{
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
    int element;cin>>element;
    if(linear_search(element,arr))
        cout<<element<<" is present in the array";
    else
        cout<<element<<" is not present in the array";
    return 0;
}
