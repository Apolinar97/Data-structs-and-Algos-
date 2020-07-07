'''
Name:Apolinar Camacho
Date:6/29/2020
Purpose: Self evaluate knowledge of sorting algos

'''

def insertion_sort(arr:[]):
    for index in range(1,len(arr)):
        key = arr[index]
        pos = index
        while key < arr[pos-1] and pos>0:
            arr[pos] = arr[pos-1]
            pos-=1
        arr[pos] = key
        
def selection_sort(arr:[]):
    for index in range(len(arr)-1):
        min_val = min(arr[index:])
        min_index = arr.index(min_val,index)
        
        if(arr[index] != arr[min_index]):
            arr[index], arr[min_index] = arr[min_index], arr[index]
        
def merge_sort(arr:[]):
    if(len(arr) > 1):
        mid = len(arr)//2
        L = arr[:mid]
        R = arr[mid:]

        merge_sort(L)
        merge_sort(R)
        i = j = k = 0
        
        while i<len(L) and j<len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i+=1
            else:
                arr[k] = R[j]
                j+=1
            k+=1
        while i<len(L):
            arr[k] = L[i]
            i+=1
            k+=1
        while j<len(R):
            arr[k] = R[j]
            j+=1
            k+=1


def partition(arr, first, last):
    pivot = arr[first]
    left = first +1
    right = last
    while True:
        while left<=right and arr[left] <= pivot:
            left+=1
        while left<=right and arr[right] >= pivot:
            right-=1
        if(left > right):
            break
        else:
            arr[left], arr[right] = arr[right], arr[left]
    arr[first], arr[right] = arr[right], arr[first]
    return right

def quick_sort(arr, first, last):
    if(first < last):
        p = partition(arr,first,last)
        quick_sort(arr,first, p-1)
        quick_sort(arr, p+1, last)

a = [5,2,1,10,11,3,6]
print(a)
quick_sort(a,0,len(a)-1)
print(a)

'''
Notes:
Quick Sort: 
            Average case:O(nlogn)
            Worst case: O(n^2)
            Aux space: O(n) from call stacks

            Inplace sorting, no extra space needed. (uses available mem)
            Picking the pivot is the most important part of quick sort
            Go with the medium for the pivot.

Merge Sort:
            Average case:O(nlogn)
            Worst case: O(nlogn)
            Aux space

            Not inplace, requires more space.
            

'''
