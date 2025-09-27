import java.util.*;

public class Remove_duplicate {

    void RemoveDuplicateBruteForce(int[] nums) {
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {

                    for (int k = j; k < n - 1; k++) {
                        nums[k] = nums[k + 1];
                    }
                    n--;
                    j--;
                }

            }

        }
        for (int a : nums)
            System.out.print(a + " ");
        System.out.println(n);
    }

    void RemoveDuplicateTwoPointer(int[] nums) {

        int pointer = 0;
        for (int i = 1; i < nums.length; i++) {

            if (nums[pointer] != nums[i]) {
                pointer++;
                nums[pointer] = nums[i];
            }

        }
        System.out.println(pointer + 1);
        for (int a : nums)
            System.out.print(a + " ");
    }

    public static void main(String[] args) {

        int[] nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

        Remove_duplicate rd = new Remove_duplicate();
        // rd.RemoveDuplicateBruteForce(nums);
        rd.RemoveDuplicateTwoPointer(nums);

    }

}