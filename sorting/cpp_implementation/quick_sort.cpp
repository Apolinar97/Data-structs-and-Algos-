#include <iostream>


void printArray(int arr[], int size) {

	for(int i=0; i<size; i++) {
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\n";
}

int partition(int arr[], int first, int last) {
	int pivot = arr[first];
	int left = first + 1;
	int right = last;

	while (true) {
		while(left<= right && arr[left] <= pivot)
			left+=1;
		while(left<=right && arr[right] >= pivot)
			right-=1;
		if (left > right)
			break;
		else {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}

	}
	int temp = arr[first];
	arr[first] = arr[right];
	arr[right] = temp;
	return right;
}

void quickSort(int arr[], int first, int last) {
	if(first < last) {
		int p = partition(arr,first, last);
		quickSort(arr, first, p-1);
		quickSort(arr, p+1, last);
	}
}

int main() {
	int size = 5;
	int arr[size] = {4,0,-1,1,6};
	printArray(arr, size);
	std::cout<<"sorting..."<<"\n";
	quickSort(arr,0,size-1);
	printArray(arr, size);




	return 0;
}