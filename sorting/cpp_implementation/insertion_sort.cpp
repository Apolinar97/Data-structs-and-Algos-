#include <iostream>

void printArray(int arr[], int size) {

	for(int i=0; i<size; i++) {
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\n";
}


void insertionSort(int arr[], int size) {
	int i;
	int key;
	int pos;
	for(i=1; i<size; i++) {
		key = arr[i];
		pos = i;

		while(key < arr[pos-1] && pos>0) {
			arr[pos] = arr[pos-1];
			pos-=1;
		}
		arr[pos] = key;
	}
}

int main() {
	int size = 5;
	int a[size] = {0,-1,4,6,2};
	printArray(a,size);
	std::cout<<"Sorting...\n";
	insertionSort(a,size);
	printArray(a,size);
	

	return 0;
}