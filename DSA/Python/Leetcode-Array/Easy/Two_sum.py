def bruteforce(nums ,target):


    for i in range(len(nums)):
        for j in range(i+1 , len(nums)):
            if(nums[i] + nums[j] == target):
                print([i  , j])
            


def sortedTwopointer(nums, target):
    left = 0
    right = len(nums) - 1

    while(left < right):
        sum = nums[left] + nums[right]
        if(sum == target): return [left , right]  
        elif(sum < target): left += 1
        else: right -= 1

    
def unsortedTwopointer(nums , target):


    num_with_index = [(num , i) for i  , num in enumerate(nums)]

    num_with_index.sort(key=lambda x : x[0])

    

    left = 0
    right = len(num_with_index) - 1

    while left < right:
        curr_sum = num_with_index[left][0] + num_with_index[right][0]

        if curr_sum == target:
            print([num_with_index[left][1], num_with_index[right][1]])
            break
        elif curr_sum < target:
            left += 1
        else:
            right -= 1






def hashmapversion(nums , target):

    seen = {}

    for i in range(len(nums)):
        complement = target  - nums[i]

        if(complement in seen):
            return  [seen[complement] , i]
        
        seen[nums[i]] = i







nums  = [12,50,2,9,4,58,7]
target = 9

print(hashmapversion(nums , target))
