#include <iostream>

void printArray(int arr[], int size) {

	for(int i=0; i<size; i++) {
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\n";
}

void selectionSort(int arr[], int size) {
	int i,j, min_index;

	for(i=0; i<size-1; i++) {
		min_index = i;
		for(j=i+1; j<size; j++) {
			if(arr[min_index] > arr[j])
				min_index = j;
		}
		int temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
}


int main() {
	int size = 5;
	int a[size] = {0,-1,4,6,2};
	printArray(a,size);
	std::cout<<"Sorting...\n";
	selectionSort(a,size);
	printArray(a,size);
	return 0;
}