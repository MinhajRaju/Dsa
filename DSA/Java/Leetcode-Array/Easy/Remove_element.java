import java.util.*;

public class Remove_element {

    void RemoveElementBruteForce(int[] nums, int val) {

        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                for (int j = i; j < n - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                n--;
                i--;
            }
        }

        for (int arr : nums)
            System.out.print(arr);

    }

    void RemoveDuplicateTwoPointer(int[] nums, int val) {

        int pointer = 0;

        for (int i = 0; i < nums.length; i++) {

            if (nums[i] != val) {
                nums[pointer] = nums[i];
                pointer++;
            }
        }
        for (int arr : nums)
            System.out.print(arr + " ");
    }

    public static void main(String[] args) {

        Remove_element re = new Remove_element();
        int[] nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
        int val = 2;
        // re.RemoveElementBruteForce(nums, val);
        re.RemoveElementBruteForce(nums, val);
    }

}