#include<iostream>
#include<cmath>

using namespace std;

long long int max_prime_factor(long long int n){
    long long int max_prime = -1;

    while(n % 2 == 0){
        max_prime = 2;
        n >>= 1;
    }

    for(int i = 3; i <= int(sqrt(n)); i+= 2){
        while(n % i == 0){
            max_prime = i;
            n /= i;
        }

    }

    if(n > 2){
            max_prime = n;
    }

    return max_prime;

}

int main(void){
    long long int n;

    cin >> n;
    cout << "Max Prime Factor of number is: " << max_prime_factor(n);

    cin.get();
    cin.ignore();
}