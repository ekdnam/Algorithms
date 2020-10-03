#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration of size, search and iteration variable element variables
    long int size, ele, i;

    // toggle to check if element is not found
    int toggle = 0;
    //user input size of the array
    printf("Enter the size of the array:: ");
    scanf("%ld", &size);

    //myArray Array variable with size field
    long int myArray[size];

    //loop to input the array elements
    printf("Enter the elements of the array::\n");
    for(i = 0; i < size; i++)
    {
        scanf("%ld",&myArray[i]);
    }

    //displaying the elements of the array
    printf("Your array is::\n");
    for(i = 0; i < size; i++)
    {
        printf("%ld, ",myArray[i]);
    }

    //user input searching element
    printf("\nEnter the element to be searched for:: ");
    scanf("%ld", &ele);

    //scanning the array for the element
    for(i = 0; i < size; i++)
    {
        if(myArray[i] == ele)
        {
            printf("Found at Position :: %ld", i+1);
            toggle = 1;
            break;
        }
    }

    //condition to check if element is not present
    if(toggle == 0)
    {
        printf("Requested element not present in the array");
    }

    return 0;
}
