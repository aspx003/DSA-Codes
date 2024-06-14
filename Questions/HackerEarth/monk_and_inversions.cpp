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
        int n;
        cin >> n;
        int count = 0;

        int matrix[n][n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int x = i; x < n; x++)
                {
                    for (int y = j; y < n; y++)
                    {
                        if(matrix[i][j] > matrix[x][y])
                            count++;
                    }
                    
                }
                
            }
            
        }
        

        cout << count << "\n";
    }

    return 0;
}