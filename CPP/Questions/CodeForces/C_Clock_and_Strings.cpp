#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ct = 0;
        for (int i = min(a, b); i <= max(a, b); i++)
        {
            if (i == c || i == d)
                ct++;
        }

        // cout << ct << "\n";

        if (ct != 0 && ct != 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}