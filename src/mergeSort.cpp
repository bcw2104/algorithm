#include<iostream>
using namespace std;

void merge(int* arr, int* copy, int start,int mid, int end) {
	int p1 = start;
	int p2 = mid + 1;
	int index = start;

	for (int i = index; i <= end; i++) {
		copy[i] = arr[i];
	}
	while (p1 <= mid && p2 <= end) {
		if (copy[p1] > copy[p2]) {
			arr[index] = copy[p2];
			p2++;
		}
		else {
			arr[index] = copy[p1];
			p1++;
		}
		index++;
	}
	for (int i = p1; i <= mid; i++) {
		arr[index] = copy[i];
		index++;
	}
}

void mergesort(int* arr,int* copy, int start, int end) {
	int mid;
	if (end > start) {
		mid = (end + start) / 2;
		mergesort(arr, copy, start, mid);
		mergesort(arr, copy, mid+1, end);
		merge(arr, copy, start, mid, end);
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
	int* copy;

	arr = new int[10]{ 4,5,7,2,3,7,9,12,1,10 };
	copy = new int[10]{ 0, };

	mergesort(arr,copy, 0, 9);
	print(arr,10);

	return 0;
}