#taking first element as the pivot
# def partition(list1, first, last):
#     pivot = list1[first]
    
#     left = first +1
#     right = last

#     while True:
#         while left<=right and list1[left] <= pivot:
#             left +=1
#         while left<=right and list1[right] >= pivot:
#             right -=1
    
#         if right<left:
#             break
#         else:
#             list1[left], list1[right] = list1[right], list1[left]
    
#     list1[first], list1[right] = list1[right], list1[first]
#     return right



# def quick_sort(list1,first,last):
#     if first < last:  
#         p = partition(list1,first,last)
#         quick_sort(list1,first,p-1)
#         quick_sort(list1, p+1, last)

#decending order
def partition(arr,first,last):
    pivot = arr[first]
    left = first+1
    right = last

    while True:
        while left<=right and arr[left] >=pivot:
            left+=1
        while left<=right and arr[right] <= pivot:
            right-=1
        if left > right:
            break
        else:
            arr[left], arr[right] = arr[right], arr[left]
    arr[first], arr[right] = arr[right], arr[first]
    return right

def quick_sort(arr,first,last):
    if first<last:
        p = partition(arr,first,last)
        quick_sort(arr,first,p-1)
        quick_sort(arr,p+1,last)



a = [3,2,10,11,8,1,13,-100,-6]

print(a)
quick_sort(a,0, len(a)-1)
print(a)