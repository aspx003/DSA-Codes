// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/?envType=daily-question&envId=2024-05-27

class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i = 1; i <= nums.size(); i++) {
            int greater = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] >= i) {
                    greater++;
                }
            }

            if(greater == i) {
                return i;
            }
        }

        return -1;
    }
};