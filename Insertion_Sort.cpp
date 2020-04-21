#include <iostream>
using namespace std;

/*

input: a sequence of n numbers - a_0, a_1, ... a_(n-1)
output: a reordering of numbers where they are arranged in ascending order

Pseudo code:
1	for j ← 2 to length[A]
2		 do key ← A[j]
3			Insert A[j] into the sorted sequence A[1  j - 1].
4			i ← j - 1
5			while i > 0 and A[i] > key
6				do A[i + 1] ← A[i]
7					i ← i - 1
8		A[i + 1] ← key

*/

/*
		1> Worst case: O(n^2) time complexity and swaps
		2> Best case: O(n) time complexity and O(1) swaps
		3> Average case: O(n^2) time complexity and swaps

		Space complexity: Worst case - O(n) 
*/

void insertion_sort(int *arr, int n) {
	int iter = 2, key = 0, i;
	for (iter = 1; iter < n; iter++) {
		key = arr[iter];
		i = iter - 1;
		while (i > -1 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = key;
	}
}

void input(int *arr, int n) {
	cout << "Elements: ";
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
	input(arr, n);
	insertion_sort(arr, n);
	display(arr, n);
}
