#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int start = -1, end = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (start == -1)
                {
                    start = i;
                }
                else
                {
                    end = i;
                }
            }
        }
        cout << (end - start + 1) << endl;
    }
    return 0;
}