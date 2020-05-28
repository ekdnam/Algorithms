#include<iostream>
using namespace std;

bool isPalindrome(int num1){
    int num2, digit, rev = 0;
    num1 = 0;

     num2 = num1;
     do
     {
        digit = num1 % 10;
        rev = (rev * 10) + digit;
        num1 = num1 / 10;
     } while (num1 != 0);

     if (num2 == rev){
         return true;
     }
     else{
         return false;
     }
}

long long int palidrome_prod(){
    long long int bigPalin = -1;
    int n1, n2;
    for(n1 = 100; n1 < 1000; n1++){
        for(n2 = 100; n2<1000;n2++){
            long long int prod = n1*n2;
            if(prod > bigPalin){
                if(isPalindrome(prod)){
                    bigPalin = prod;
                }
            }
        }
    }
    if(bigPalin != -1){
        return bigPalin;
    }
    return -1;
}

int main(){
    cout << palidrome_prod();
    cin.get();
    cin.ignore();
}