#include <iostream>
#include<chrono>
#include<time.h>
#include<cmath>
#include<Stdlib.h>

using namespace std;
using namespace std::chrono;

void get_input(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void permute_by_cyclic(int *arr, int n) {
	srand(time(0));
	int *b = new int[n];
	int *c;
	int offset = rand() % n;

	for (int i = 0; i < n; i++) {
		int dest = i + offset;
		if (dest > n) {
			dest -= n;
		}
		b[dest] = arr[i];
	}

	c = arr;
	c = NULL;
	arr = b;
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

	permute_by_cyclic(arr, n);

	cout << "The randomized elements are: " << endl;
	display(arr, n);
}
