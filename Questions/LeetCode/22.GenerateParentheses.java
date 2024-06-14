class Solution {
    static void helper(List<String> ans, int l, int r, String s, int n) {
        if(s.length() == n * 2) {
            ans.add(s);
            return;
        }

        if(l < n) {
            helper(ans, l + 1, r, s + "(", n);
        }

        if(r < l) {
            helper(ans, l, r + 1, s + ")", n);
        }
    }

    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList<String>();
        helper(ans, 0, 0, "",n);
        return ans;
    }
}
