list1 = [56,3,2,78,6,0]

list2 = [56,0,2,2,6,0]

def selection_sort_non_duplicates():
    
    for index in range(len(list1)):
        
        min_val = min(list1[index:])
        min_index = list1.index(min_val)

        list1[index], list1[min_index] = list1[min_index], list1[index]


def selection_sort():
    for index in range(len(list2)-1):
        
        min_val = min(list2[index:])
        min_index = list2.index(min_val,index)

        if list2[index] != list2[min_index]:
            list2[index], list2[min_index] = list2[min_index], list2[index]


print(list2)
selection_sort()
print(list2)