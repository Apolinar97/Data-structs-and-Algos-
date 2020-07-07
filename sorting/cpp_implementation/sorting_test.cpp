#include <iostream>

void selection_sort(int arr[], int size);
void insertion_sort(int arr[], int size);

void print_array(int arr[], int size);
void swap(int* val, int* val2);
int main() {
    int size = 5;
    int arr[size] = {5,3,10,-1,2};
    //print_array(arr,size);
    //selection_sort(arr,size);
    insertion_sort(arr,size);
    print_array(arr,size);
    return 0;
}


void insertion_sort(int arr[], int size) {
    int i;
    int pos;
    int key;
    for(i=1; i<size; i++) {
        key = arr[i];
        pos = i;

        while (key < arr[pos-1] && pos>0) {
            arr[pos] = arr[pos-1];
            pos -=1;
        }
        arr[pos] = key;
    }
}

void selection_sort(int arr[], int size) {
    int i, j, min_index;

    for(i=0; i<size-1; i++) {
        min_index = i;
        for(j=i+1;j<size; j++) {
            if(arr[min_index] > arr[j]) {
                min_index = j;        
            }
        }
        //swap(&arr[min_index], &arr[i]);
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }


    std::cout<<"min_index:" << min_index<<"\n";
}

void print_array(int arr[], int size) {
    for(int i=0; i<size; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void swap(int* val, int* val2) {
    int temp = *val;
    *val = *val2;
    *val2 = temp;

}
