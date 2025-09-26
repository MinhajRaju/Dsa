public class Longest_common_prefix {

    void LogestCommonPrefixBruteFroce(String[] strs) {

        String prefix = "";

        outer: for (int i = 0; i < strs[0].length(); i++) {

            for (int j = 1; j < strs.length; j++) {

                if (strs[j].charAt(i) != strs[0].charAt(i)) {
                    break outer;
                }

            }
            prefix += strs[0].charAt(i);

        }
        System.out.println(prefix);
    }

    void LongestCommonPrefix(String[] strs) {

        if (strs.length == 0)
            System.out.println("");

        String prefix = strs[0];

        for (int i = 1; i < strs.length; i++) {

            int j = 0;
            while (j < strs[i].length() && j < prefix.length() && prefix.charAt(j) == strs[i].charAt(j)) {
                j++;
            }

            String newprefix = "";

            for (int k = 0; k < j; k++) {
                newprefix += prefix.charAt(k);
            }

            prefix = newprefix;
        }
        System.out.println(prefix);
    }

    public static void main(String[] args) {

        String[] strs = { "flower", "flow", "flight" };

        Longest_common_prefix lcp = new Longest_common_prefix();
        // lcp.LongestCommonPrefix(strs);

        lcp.LogestCommonPrefixBruteFroce(strs);

        return;
    }

}