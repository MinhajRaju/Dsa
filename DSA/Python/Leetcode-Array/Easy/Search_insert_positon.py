def search_insert_position(nums, target):
    n = len(nums)
    res = 0
    for i in range(n):
        for j in range(i, n):
            if target == nums[j]:
                res = i
                break
            if nums[n - 1] < target:
                res = n
                break
            if j + 1 < n and target > nums[j] and target < nums[j + 1]:
                res = j + 1
                break
    print(res)


def search_insert_position_two_pointer(nums, target):
    n = len(nums)
    res = 0
    pointer = 0
    for i in range(1, n):
        if nums[i] == target:
            res = i
            break
        if nums[n - 1] < target:
            res = n
        if nums[i] > target and nums[pointer] < target:
            pointer += 1
            res = pointer
    print(res)


def search_insert_position_logn(nums, target):
    left, right = 0, len(nums)
    res = 0

    while left < right:
        mid = (left + right) // 2

        if target > nums[left]:
            res = left + 1

        if target == nums[mid]:
            res = mid
            break
        elif target > nums[mid]:
            left += 1
        else:
            right -= 1

    print(res)



nums = [1, 3, 5, 6, 10]
target = 10


search_insert_position_logn(nums, target)
