#include <iostream>
using namespace std;
int pow(int a, int b ){
	if(a==0){
		return 0;
	}
	if(b==0){
		return 1;
	}
	int x=pow(a,b/2);
	x*=x;
	if(b%2){
		return x*a;
	}
	return x;


}
int main() {
   int a, m;
   cout<<"Enter number to find power: ";
   cin>>a;
   cout<<"Enter power: ";
   cin>>m;
   cout<<pow(a, m)<<endl;

}
