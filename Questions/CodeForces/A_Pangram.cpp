#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    cin >> n >> str;

    if (n < 26)
    {
        cout << "NO";
        return 0;
    }

    unordered_set<char> set;

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            set.emplace(str[i]);
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            set.emplace(str[i] - 'A' + 'a');
        }
    }

    if (set.size() == 26)
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";

    return 0;
}
