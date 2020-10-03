// Smallest power of 2 greater than or equal to n
/*
 If n is a power of 2 then return n 
1  If (n & !(n&(n-1))) then return n 
2  Else keep right shifting n until it becomes zero and count no of shifts
    a. Initialize: count = 0
    b. While n ! = 0
            n = n>>1
            count = count + 1

 Now count has the position of set bit in result 
3  Return (1 << count)  
*/

//code :
int nextPowerOf2(int n)
{  
    int count = 0;  
      
    // First n in the below condition  
    // is for the case where n is 0  
    if (n && !(n & (n - 1)))  
        return n;  
      
    while( n != 0)  
    {  
        n >>= 1;  
        count += 1;  
    }  
      
    return 1 << count;  
}

// Timecomplexity : O(n)
