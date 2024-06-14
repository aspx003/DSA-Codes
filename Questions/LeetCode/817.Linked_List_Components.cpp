/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> set;

        for(int &i: nums) {
            set.emplace(i);
        }

        int ans = 0;
        bool flag = false;

        while(head) {
            if(set.count(head->val)) {
                if(!flag) {
                    ans++;
                }
                flag = true;
            } else {
                flag = false;
            }
            head = head->next;
        }

        return ans;
    }
};
