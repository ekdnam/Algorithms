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

int binary_search(int *arr, int low, int high, int key) {

	if (high >= low) {
		int mid = low + (high - low) / 2;
		if (key == arr[mid]) {
			return mid;
		}
		else if (arr[mid] > key) {
			return binary_search(arr, low, mid - 1, key);
		}
		else{
			return binary_search(arr, mid + 1, high, key);
		}
	}
	return -1;
}


int main()
{
	int n, *arr, key;
	cout << "Number of elements: ";
	cin >> n;
	
	arr = new int[n];

	cout << "Enter elements: ";
	get_input(arr, n);

	cout << "Enter element to be found: ";
	cin >> key;
	
	quicksort(arr, 0, n-1);
	auto start = high_resolution_clock::now();
	int index = binary_search(arr, 0, n-1, key);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	if (index == -1) {
		cout << "Element not found." << endl;
	}
	else {
		cout << "Element found at position: " << index << endl;
	}
	cout << "Running time of binary search is: " << duration.count() << " microseconds." << endl;

	cout << "\nPress anny key to exit ";
	cin.get();
	cin.ignore();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
