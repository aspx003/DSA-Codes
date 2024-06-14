class Solution {
public:
    int titleToNumber(string col) {
        if(col.size() == 1) {
            return col[0] - 'A' + 1;
        }

        int ans = 0;
        for(int i = 0; i < col.size(); i++) {
            ans = ans * 26 + (col[i] - 'A' + 1);
        }

        return ans;
    }
};
