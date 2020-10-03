// Finding the position of rightmost set bit of a number

/*

ALgorithm :

1. Take two's complement of the given no as all bits are reverted
except the first '1' from right to left

2  Do a bit-wise & with original no, this will return no with the
required one only.

3  Take the log2 of the no

4  Add 1
*/

//Example : 12(1100)----:
/*
1. Take two's complement of the given no as all bits are reverted
except the first '1' from right to left (0100)

2  Do a bit-wise & with original no, this will return no with the
required one only (0100)

3  Take the log2 of the no, you will get (position - 1) (2)

4  Add 1 (3)

*/

//code:
#include<bits/stdc++.h>
int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}
