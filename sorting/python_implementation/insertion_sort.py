from random import randrange

nums = []
nums

# O(N^2)
def populate_list():
    for i in range(10):
        random_number = randrange(100)
        if random_number not in nums:
            nums.append(random_number)

def insertion_sort():
    for index in range(1,len(nums)):
        key = nums[index]
        pos = index
        while key < nums[pos-1] and pos>0:
            nums[pos] = nums[pos-1]
            pos-=1
        nums[pos] = key
def print_list():
    for num in nums:
        print(num)

populate_list()
print_list()
print("---------------")
insertion_sort()
print_list()