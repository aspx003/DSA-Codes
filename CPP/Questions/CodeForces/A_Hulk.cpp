#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    string ans = "";
    int that = t - 1;
    for (int i = 1; i <= t; i++)
    {
        ans += "I ";

        if (i % 2 == 0)
        {
            ans += "love ";
        }
        else
        {
            ans += "hate ";
        }

        if (that != 0)
        {
            ans += "that ";
            that--;
        }
    }

    cout << ans << "it";

    return 0;
}
