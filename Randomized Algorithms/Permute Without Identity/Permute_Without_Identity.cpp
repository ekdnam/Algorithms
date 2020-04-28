#include <iostream>
#include<chrono>
#include<stdlib.h>
#include<cmath>
#include<time.h>

using namespace std;
using namespace std::chrono;

void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void get_input(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void permute_without_identity(int *arr, int n) {
	
	srand(time(0));
	
	for (int i = 0; i < n; i++) {
		swap(&arr[i], &arr[(rand() % (n  - i)) + i]);
	}
}

void display(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main()
{
	int n, *arr;
	cout << "Number of elements: ";
	cin >> n;

	arr = new int[n];

	cout << "Elements: " << endl;
	get_input(arr, n);

	auto start = high_resolution_clock::now();
	permute_without_identity(arr, n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);
	cout << "Running time of algorithm is: " << duration.count() << "ns " << endl;
	
	cout << "The randomized array is: " << endl;
	display(arr, n);
}
