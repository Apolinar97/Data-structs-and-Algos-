
def insertion_sort(arr:[]):
    for index in range(1, len(arr)):
        key = arr[index]
        pos = index

        while key < arr[pos-1] and pos>0:
            arr[pos] = arr[pos-1]
            pos-=1
        arr[pos] = key


def selection_sort(arr:[]):
    for index in range(len(arr)-1):
        min_val = min(arr[index:])
        min_index = arr.index(min_val, index)

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

def parition(arr,first,last):
    pivot = arr[first]
    left = first + 1
    right = last
    while True:
        while left<=right and arr[left] <= pivot:
            left+=1
        while left<=right and arr[right] >= pivot:
            right-=1
        if right < left:
            break
        else:
            arr[left], arr[right] = arr[right], arr[left]
    arr[first], arr[right] = arr[right], arr[first]
    return right

def quick_sort(arr,first,last):
    if first < last:
        p  = parition(arr,first,last)
        quick_sort(arr,first,p-1)
        quick_sort(arr,p+1, last)




arr = [5,1,4,10,0,-2]

quick_sort(arr,0,len(arr)-1)
print(arr)