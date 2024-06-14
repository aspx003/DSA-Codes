#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n] = {0};

        k = k % n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // logic
        reverse(arr + n - k, arr + n);
        reverse(arr, arr + n - k);
        reverse(arr, arr + n);

        for (int a : arr)
        {
            cout << a << " ";
        }
        cout << "\n";
    }
    return 0;
}
