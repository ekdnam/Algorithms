#include <iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;
# define MAX 100000
void get_array(int *arr, int n) {
	cout << "Elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void merge_array(int *arr, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int *L = new int[n1], *R = new int[n2];
	int i = 0, j = 0;
	while (i < n1) {
		L[i] = arr[p + i];
		i++;
	}
	while (j < n2) {
		R[j] = arr[q + j + 1];
		j++;
	}
	//L[n1] = MAX;
	//R[n2] = MAX;
	i = 0; j = 0;
	int k = p;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++; k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++; k++;
	}
	delete[]L;
	delete[]R;
}



void merge_sort(int *arr, int l, int r) {
	if (l < r) {
		int m = (l+r)/ 2;

		merge_sort(arr, l, m);

		merge_sort(arr, m + 1, r);

		merge_array(arr, l, m, r);
	}
}


void display_array(int *arr, int n) {
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
	
	get_array(arr, n);

	auto start = high_resolution_clock::now();
	merge_sort(arr, 0, n - 1);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\nRunning time: " << duration.count() << " microseconds" << endl;

	display_array(arr, n);

	delete[]arr;
	
	cout << "Press any key to exit. ";
	cin.get();
	cin.ignore();
}

