#include <iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

/*
Bubblesort is a popular sorting algorithm. It works by repeatedly swapping adjacent elements
that are out of order.

BUBBLESORT(A)
1	for i ← 1 to length[A]
2		do for j ← length[A] downto i + 1
3			do if A[j] < A[j - 1]
4				then exchange A[j] ↔ A[j - 1]

Worst case time complexity: O(n^2) when the list is not pre-sorted
Average case time complexity: O(n^2)
Best case time complexity: O(n) list is pre sorted

Space complexity: O(1)

*/


void bubble_sort(int *arr, int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1 ; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

//If the array gets sorted in any iteration before the n^2 th iteration, the sorting process is halted
void optimized_bubble_sort(int *arr, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		//initialize flag to monitor swapping process
		bool flag = 0;
		for (j = 0; j >  n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// set flag to 1 if the swapping condition is true anywhere in the inner for loop
				flag = 1;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		// if the flag is still not set that means the array is sorted and thus there is no need to continue the sorting process
		if (!flag) {
			break;
		}
	}
}


void get_input(int *arr, int n) {
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
	int *arr, n;
	cout << "Number of elements: ";
	cin >> n;
	arr = new int[n];

	//get the elements of the array
	cout << "Elements of array: " << endl;
	get_input(arr, n);

	//perform bubble sort
	auto start = high_resolution_clock::now();
	bubble_sort(arr, n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);
	cout << "Running time: " << duration.count() << " ns" <<endl;

	//display the contents of array
	cout << "The sorted array is: " << endl;
	display(arr, n);

	cout << "\n\nFinding difference in running time by calling the the normal bubble sort function" << endl <<"as well as optimized bubble sort" << endl;

	start = high_resolution_clock::now();
	bubble_sort(arr, n);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop - start);
	cout << "\nRunning time for already sorted list and normal bubble sort: " << duration.count() << " ns" << endl;
	
	start = high_resolution_clock::now();
	optimized_bubble_sort(arr, n);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop - start);
	cout << "\nRunning time for already sorted list and optimized bubble sort: " << duration.count() << " ns" << endl;

	cout << "Enter values again, first number of elements: " << endl;
	cin >> n;
	cout << "Enter values: " << endl;
	get_input(arr, n);

	start = high_resolution_clock::now();
	optimized_bubble_sort(arr, n);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop - start);
	cout << "\nRunning time for optimized bubble sort: " << duration.count() << " ns" << endl;
	
	delete[]arr;
}

