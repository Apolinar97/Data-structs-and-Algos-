#second self evalution 07/07/2020

def selection_sort(arr:[]):
    for index in range(len(arr)-1):
        min_val = min(arr[index:])
        min_index = arr.index(min_val,index)

        if arr[index] != arr[min_index]:
            arr[index], arr[min_index] = arr[min_index], arr[index]
def insertion_sort(arr:[]):
    for index in range(1,len(arr)):
        key = arr[index]
        pos = index

        while key < arr[pos-1] and pos>0:
            arr[pos] = arr[pos-1]
            pos-=1
        arr[pos] = key

def merge_sort(arr:[]):
    if len(arr) > 1:
        mid = len(arr)//2
        
        left = arr[:mid]
        right = arr[mid:]
        
        merge_sort(left)
        merge_sort(right)

        i = j = k = 0

        while i<len(left) and j<len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i+=1
            else:
                arr[k] = right[j]
                j+=1
            k+=1
        while i<len(left):
            arr[k] = left[i]
            i+=1
            k+=1
        while j<len(right):
            arr[k] = right[j]
            j+=1
            k+=1
def partition(arr,start,end):
    pivot = arr[start]
    left = start + 1
    right = end

    while True:
        while left<=right and arr[left] <= pivot:
            left+=1
        while left<=right and arr[right] >= pivot:
            right-=1
        if right < left:
            break
        else:
            arr[left], arr[right] = arr[right], arr[left]
    arr[start], arr[right] = arr[right], arr[start]
    return right

def quick_sort(arr,start,end):
    if start < end:
        p = partition(arr,start,end)
        quick_sort(arr,start,p-1)
        quick_sort(arr,p+1,end)


a = [3,1,10,-1,2,0]

print(a)
quick_sort(a,start=0,end=len(a)-1)
print(a)