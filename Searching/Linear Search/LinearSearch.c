#include<stdio.h>
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
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
    int element;scanf("%d",&element);
    if(linear_search(element,arr))
        printf("%d is present in the array",element);
    else
        printf("%d is not present in the array",element);
    return 0;
}
