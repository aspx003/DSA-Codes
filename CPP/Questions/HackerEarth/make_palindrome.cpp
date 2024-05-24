#include <bits/stdc++.h> 
using namespace std;

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        string str;
        cin >> n >> str;
        unordered_map<char, int> m;

        for (int i = 0; i < n; ++i)
        {
            m[str[i]]++;
        }
        int count = 0;

        for(auto i: m) {
            if(i.second % 2 != 0) {
                count++;
            }
        }

        if(count == 0) {
            cout << 0 << endl;
        } else {
            cout << --count << endl;
        }
    }

    return 0; 
}