#include <iostream>
using namespace std;
int pow(int a, int b , int m){
if(b==0){
return 1;}
int x=pow(a,b/2,m)%m;
x=(x*x)%m;
if(b%2==0){
return x;}
else{
return (x*a)%m;}

}
int modInverse(int a, int m) {
   return pow(a, m - 2, m);
}
int main() {
   int a, m;
   cout<<"Enter number to find modular multiplicative inverse: ";
   cin>>a;
   cout<<"Enter Modular Value: ";
   cin>>m;
   cout<<modInverse(a, m)<<endl;
}
