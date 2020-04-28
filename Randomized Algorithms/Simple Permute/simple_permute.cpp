#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<chrono>

using namespace std;
using namespace std::chrono;

void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void permute(int *arr, int n) {
	srand(time(0));
	int j = 0;
	for (int i = 0; i < n; i++) {
		j = rand() % n;
		swap(&arr[i], &arr[j]);
	}
}

void get_input(int *arr, int n) {
	cout << "Elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
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

	get_input(arr, n);

	auto start = high_resolution_clock::now();
	permute(arr, n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);
	cout << "The running time of algorithm is: " << duration.count() << "ns" << endl;

	cout << "The randomized list of elements is: ";
	display(arr, n);
  
  cout << "\nPress any key to exit ";
  cin.get();
  cin.ignore();
  
}
