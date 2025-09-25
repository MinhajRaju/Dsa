#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

/*.
=========================================
Approach 1: Brute Force
-----------------------------------------
- Idea: 
  Check every pair (i, j) to see if nums[i] + nums[j] == target.
- Time Complexity: O(n^2)
  Because we compare each element with all others.
- Space Complexity: O(1)
  No extra memory is used.
=========================================
*/
std::vector<int> two_sum_bruteforce(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // no solution found
}



/*
=========================================
Approach 2: Two Pointer
-----------------------------------------
Two cases:

Case 1: Array is already sorted
    - Use two pointers: left = 0, right = n-1
    - If sum < target → move left++ (need a bigger number)
    - If sum > target → move right-- (need a smaller number)
    - If sum == target → solution found.
    - Time Complexity: O(n)
    - Space Complexity: O(1)

Case 2: Array is not sorted
    - Create an array of {value, original index}.
    - Sort it by value.
    - Then use the two-pointer technique.
    - Time Complexity: O(n log n) (due to sorting)
    - Space Complexity: O(n) (for storing value+index)
=========================================
*/
struct Entry {
    int value;
    int index;
};

void two_sum_twopointer(std::vector<int>& nums, int target, bool is_sorted = false) {
    if (is_sorted) {
        // -------- Case 1: Already sorted --------
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int curr_sum = nums[left] + nums[right];

            if (curr_sum == target) {
                std::cout << "[" << left << " , " << right << "]";
                break;
            } else if (curr_sum < target) {
                left++; // need a larger number
            } else {
                right--; // need a smaller number
            }
        }
    } else {
        // -------- Case 2: Not sorted --------
        int n = nums.size();
        std::vector<Entry> num_with_index(n);

        // Store value + original index
        for (int i = 0; i < n; i++) {
            num_with_index[i].value = nums[i];
            num_with_index[i].index = i;
        }

        // Sort by value
        std::sort(num_with_index.begin(), num_with_index.end(), [](Entry a, Entry b) {
            return a.value < b.value;
        });

        // Two pointer technique
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = num_with_index[left].value + num_with_index[right].value;

            if (sum == target) {
                std::cout << "[" << num_with_index[left].index << " , "
                          << num_with_index[right].index << "]";
                break;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
}



/*
=========================================
Approach 3: Hashmap (unordered_map)
-----------------------------------------
- Idea:
  Use a hashmap to store seen numbers.
  Key → number, Value → index.

  For each nums[i]:
    - Find complement = target - nums[i].
    - If complement exists in hashmap → we found a solution.
    - Otherwise store nums[i] in hashmap.
- Time Complexity: O(n)
  Because lookup in unordered_map is average O(1).
- Space Complexity: O(n)
  For storing hashmap.
=========================================
*/
std::vector<int> two_sum_stl(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> mp; // value → index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // Check if complement already exists
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i}; // return old index + current index
        }

        // Store current value in hashmap
        mp[nums[i]] = i;
    }
    return {}; // no solution found
}



/*
=========================================
Main Function
=========================================
*/
int main() {
    std::vector<int> nums = {11, 17, 2, 4, 7};
    int target = 9;

    // -------- Brute Force --------
    // std::vector<int> result1 = two_sum_bruteforce(nums, target);
    // if (!result1.empty()) {
    //     std::cout << "[ " << result1[0] << " , " << result1[1] << " ]";
    // } else {
    //     std::cout << "No solution found (Brute Force)" << std::endl;
    // }

    // -------- Two Pointer --------
    // two_sum_twopointer(nums, target, false);

    // -------- Hashmap --------
    std::vector<int> result3 = two_sum_stl(nums, target);
    if (!result3.empty()) {
        std::cout << "[ " << result3[0] << " , " << result3[1] << " ]";
    } else {
        std::cout << "No solution found (Hashmap)" << std::endl;
    }

    return 0;
}
