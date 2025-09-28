def RemoveElementBruteForce(nums, val):
    n = len(nums)
    i = 0
    while i < n:
        if nums[i] == val:
            for j in range(i, n - 1):
                nums[j] = nums[j + 1]   
            n -= 1
           
        else:
            i += 1
    del nums[n:]
    print(nums)


def RemoveElementTwoPonter(nums ,val):

    pointer = 0
    for i in range(len(nums) -1):

        if nums[i] != val:

            nums[pointer] = nums[i]
            pointer += 1
    print(nums )

nums = [0,1,2,2,3,0,4,2]
val = 2

# RemoveElementBruteForce(nums , val)
RemoveElementTwoPonter(nums ,val)