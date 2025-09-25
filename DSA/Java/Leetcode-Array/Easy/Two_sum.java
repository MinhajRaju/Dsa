import java.util.*;

public class Two_sum {

    public static int[] two_pointer_brute(int[] nums, int target) {

        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[] { i, j };
                }
            }
        }
        return new int[] {};
    }

    static class Entry {
        int value;
        int index;

        Entry(int v, int i) {
            value = v;
            index = i;
        }
    }

    public static int[] twoSumTwoPointer(int[] nums, int target, boolean issorted) {

        if (issorted) {
            int left = 0, right = nums.length - 1;

            while (left < right) {

                int sum = nums[left] + nums[right];
                if (sum == target) {
                    return new int[] { left, right };
                } else if (sum < target)
                    left++;
                else
                    right--;

            }

        } else {

            int n = nums.length;
            Entry[] numwithindex = new Entry[n];

            for (int i = 0; i < n; i++) {
                numwithindex[i] = new Entry(nums[i], i);
            }
            Arrays.sort(numwithindex, (a, b) -> a.value - b.value);

            // for (Entry e : numwithindex){
            // System.out.println("("+ e.value + "," + e.index + ")");
            // }

            int left = 0, right = n - 1;

            while (left < right) {

                int sum = numwithindex[left].value + numwithindex[right].value;

                if (sum == target) {
                    return new int[] { numwithindex[left].index, numwithindex[right].index };

                } else if (sum < target)
                    left++;
                else
                    right--;

            }

        }
        return new int[] {};
    }

    public static int[] twoSumHashMap(int[] nums, int target) {

        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {

            int complement = target - nums[i];

            if (map.containsKey(complement)) {

                return new int[] { map.get(complement), i };
            }

            map.put(nums[i], i);
        }

        return new int[] {};

    }

    public static void main(String[] args) {

        int nums[] = { 11, 15, 2, 5, 6, 7 };
        int target = 9;

        // int[] result = two_pointer_brute(nums, target);

        // System.out.println("[" + result[0] + ","+ result[1] + "]" );

        // int [] result2 =twoSumTwoPointer(nums, target, false);

        // System.out.println("[" + result2[0] + ", " + result2[1] + "]" );

        int[] result3 = twoSumHashMap(nums, target);
        System.out.println("[" + result3[0] + " , " + result3[1] + "]");

    }

}