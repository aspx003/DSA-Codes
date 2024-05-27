// https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/?envType=daily-question&envId=2024-05-27

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        uint_fast16_t letters[26] = {0};

        for(auto &str: words) {
            for(auto &ch: str) {
                letters[ch - 'a']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(letters[i] % n != 0) {
                return false;
            }
        }

        return true;
    }
};