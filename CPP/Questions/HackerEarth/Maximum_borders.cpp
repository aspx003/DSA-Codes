#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int rows, columns;
        cin >> rows >> columns;

        int ans = INT_MIN;
        for(int i = 0; i < rows; i++) {
            string row_val;
            cin >> row_val;
            int count = 0;
            for(int j = 0; j < columns; j++) {
                if(row_val[j] == '#') {
                    count++;
                }
            }
            ans = max(ans, count);
        }

        cout << ans << "\n";
    }
    return 0;
}