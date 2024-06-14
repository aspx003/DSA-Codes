#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        int j, max;
        for (int i = 0; i <= n - k; i++)
        {
            max = arr[i];
            for (j = 1; j < k; j++)
            {
                if(arr[i + j] > max) {
                    max = arr[i + j];
                }
            }
            ans.push_back(max);
        }

        return ans;
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}