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
	int* arr;

	arr = new int[10]{ 4,5,7,2,3,7,9,12,1,10 };

	selectionSort(arr,10);
	print(arr, 10);

	return 0;
}