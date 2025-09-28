import java.util.*;

public class Search_insert_postion {

    // Brute Force
    public static void searchInsertPosition(List<Integer> nums, int target) {
        int n = nums.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (target == nums.get(j)) {
                    res = i;
                    break;
                } else {
                    // do nothing
                }

                if (nums.get(n - 1) < target) {
                    res = n;
                    break;
                }

                if (target > nums.get(j) && target < nums.get(j + 1)) {
                    res = j + 1;
                    break;
                }
            }
        }

        System.out.println(res);
    }

    // Two Pointer
    public static void searchInsertPositionTwoPointer(List<Integer> nums, int target) {
        int n = nums.size();
        int res = 0;
        int pointer = 0;

        for (int i = 1; i < n; i++) {
            if (nums.get(i) == target) {
                res = i;
                break;
            }
            if (nums.get(n - 1) < target) {
                res = n;
            }
            if (nums.get(i) > target && nums.get(pointer) < target) {
                pointer++;
                res = pointer;
            }
        }
        System.out.println(res);
    }

    // Binary Search (log n)
    public static void searchInsertPositionLogN(List<Integer> nums, int target) {
        int left = 0, right = nums.size();
        int res = 0;

        while (left < right) {
            int mid = (left + right) / 2;

            if (target > nums.get(left)) {
                res = left + 1;
            }

            if (target == nums.get(mid)) {
                res = mid;
                break;
            } else if (target > nums.get(mid)) {
                left++;
            } else {
                right--;
            }
        }

        System.out.println(res);
    }

    public static void main(String[] args) {
        List<Integer> nums = Arrays.asList(1, 3, 5, 6, 10);
        int target = 10;

        // searchInsertPosition(nums, target);
        // searchInsertPositionTwoPointer(nums, target);
        searchInsertPositionLogN(nums, target);
    }
}
