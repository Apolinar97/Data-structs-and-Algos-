
def merge_sort(list1):
    if(len(list1) > 1):
        mid = len(list1)//2
        L = list1[:mid]
        R = list1[mid:]
        merge_sort(L)
        merge_sort(R)

        i = j = k = 0
        
        while i < len(L) and j < len(R):
            if(L[i] < R[j]):
                list1[k] = L[i]
                i+=1
                
            else:
                list1[k] = R[j]
                j+=1
            k+=1
        
        while i < len(L):
            list1[k] = L[i]
            i+=1
            k+=1
        
        while j < len(R):
            list1[k] = R[j]
            j+=1
            k+=1
                   
nums = [3,2,10,11,9,11]
print(nums)
merge_sort(nums)
print(nums)