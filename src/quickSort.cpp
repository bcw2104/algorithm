#include<iostream>
using namespace std;

void quickSort(int* arr, int left,int right) {
	int i, j, pivot,temp;
	if (left < right) {
		i = left;
		j = right + 1;
		pivot = arr[left];

		do {
			do {
				i++;
			} while (arr[i] < pivot && i <= right);
			do {
				j--;
			} while (arr[j] > pivot && j >= left);

			if (i < j) {
				temp = arr[j];
				arr[j] = arr[i]; 
				arr[i] = temp;
			}
		} while (i < j);
		temp = arr[left];
		arr[left] = arr[j];
		arr[j] = temp;
		quickSort(arr, left, j - 1);
		quickSort(arr, j + 1, right);
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

	quickSort(arr,0,9);
	print(arr, 10);

	return 0;
}