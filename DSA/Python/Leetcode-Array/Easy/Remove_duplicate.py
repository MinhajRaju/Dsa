def RemoveDuplicate(nums):
    n = len(nums)

    for i in range(n):
        j = i + 1
        while j < n:
            if nums[i] == nums[j]:
               
                for k in range(j, n - 1):
                    nums[k] = nums[k + 1]
                n -= 1
               
            else:
                j += 1   
   
    print(nums)


def RemoveDuplicateTwopointer(nums):

    pointer = 0
    for i in range(len(nums)):
        if nums[i] != nums[pointer]:
            pointer += 1
            nums[pointer] = nums[i]
    print(nums)


nums = [0,0,1,1,1,2,2,3,3,4]
# RemoveDuplicate(nums)
RemoveDuplicateTwopointer(nums)