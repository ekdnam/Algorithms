
/*INSERTION SORT MECHANISM */

#include<stdio.h>
int main(){

   int i, j, c, t, number[25];

   printf("Enter the total number of elements:");
   scanf("%d",&c);

   printf("Enter %d elements: ", c);
   // Loop to fill the array with the input numbers
    
   for(i=0;i<c;i++)
      scanf("%d",&number[i]);

   // Here, the working of the insertion sort mechanism starts  
   for(i=1;i<c;i++){
      t=number[i];
      j=i-1;
      while((t<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=t;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<c;i++)
      printf(" %d",number[i]);

   return 0;
}
