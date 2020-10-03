/*
Given an array where every element occurs two times, except one element which occurs only once. Find the element that occurs once. Expected time complexity is O(n) and O(1) extra space.

*/
// Here we use XOR operator for this algorithms
// we know that x XOR x  = 0
// SO if we xor 0 with every element in th array then all elements occuring twice becomes zeros and we are left with the element that occurs once.

int element_occurs_once (int a[], int n)
{
    int x = 0;

    for(int i=0;i<n;i++)
    {
        x = x ^ a[i];
    }
    return x;
}

//Time complexity - O(n)
//Space complexity - O(1)

