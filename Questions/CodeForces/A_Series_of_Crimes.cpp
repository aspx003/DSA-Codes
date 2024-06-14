#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    pair<int, int> p[4];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if(c == '*') {
                p[k] = {i+1, j+1};
                k++;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        p[3].first ^= p[i].first;
        p[3].second ^= p[i].second;
    }

    cout << p[3].first << " " << p[3].second << "\n";

    return 0;
}