#include <iostream>
#include "arrayio.h"
using namespace std;

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
	get_input(arr, n);

	quicksort(arr, 0, n - 1);

	display(arr, n);
	delete[]arr;
}
