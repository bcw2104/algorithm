#include<iostream>
using namespace std;

void selectionSort(int* arr,int size) {
	int k,temp;

	for (int i = 0; i < size-1; i++) {
		k = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[k] > arr[j]) {
				k = j;
			}
		}
		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
	}
}

void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int size;
	int* arr;

	cin >> size;

	arr = new int [size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	selectionSort(arr, size);
	print(arr, size);

	return 0;
}