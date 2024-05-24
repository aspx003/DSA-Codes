// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/favourite-singer-a18e086a/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<long long, int> m;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        m[x]++;
    }

    // find the greatest value
    int gr = INT_MIN;
    for(auto pr: m) {
        if(pr.second > gr) {
            gr = pr.second;
        }
    }

    int count = 0;
    for(auto pr: m) {
        if(pr.second == gr) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}