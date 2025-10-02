import java.util.*;

public class Merge_sorted_array {

    void Merge_sorted_array_two_pointer(int[] nums1, int[] nums2) {

        int i = 3 - 1;
        int j = 3 - 1;
        int k = 5;

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;

        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        for (int a : nums1)
            System.out.print(" " + a);

    }

    public static void main(String[] args) {

        int[] nums1 = { 1, 2, 7, 0, 0, 0 };
        int[] nums2 = { 4, 5, 6 };

        Merge_sorted_array ms = new Merge_sorted_array();
        ms.Merge_sorted_array_two_pointer(nums1, nums2);

    }

}