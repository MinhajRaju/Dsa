import java.util.*;

public class Pascal_triangel {

    public static void Pascal(int numsRows) {
        List<List<Integer>> pascal = new ArrayList<>();

        for (int i = 0; i < numsRows; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    row.add(1);
                } else {
                    row.add(pascal.get(i - 1).get(j - 1) + pascal.get(i - 1).get(j));
                }
            }
            pascal.add(row);
        }

        for (List<Integer> row : pascal) {
            for (int val : row) {
                System.out.print(val + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int numsRows = 5;
        Pascal(numsRows);
    }
}
