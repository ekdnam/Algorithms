#include <iostream>
#include "arrayio.h"
#include<chrono>
using namespace std;
using namespace std::chrono;
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int partition(int *arr, int p, int r) {
	int x = arr[r];
	int i = p - 1;
	int j = p;
	for (int j = p; j <= r - 1; j++) {
		if (arr[j] <= x) {
			i += 1;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return i + 1;
}

void quicksort(int *arr, int p, int r) {
	if (p < r) {
		int q = partition(arr, p, r);
		quicksort(arr, p, q - 1);
		quicksort(arr, q + 1, r);
	}
}

int main()
{
	int *arr, n;
	cout << "Elements: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter elements: ";
	get_input(arr, n);

	auto start = high_resolution_clock::now();
	quicksort(arr, 0, n - 1);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Running time of algorithm is: " << duration.count() << " microseconds. " << endl;

	cout << "Sorted array is: " << endl;
	display(arr, n);
	delete[]arr;

	cout << "Press any key to exit ";
	cin.get();
	cin.ignore();
}
