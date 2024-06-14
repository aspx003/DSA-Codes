#include <bits/stdc++.h> 
using namespace std;

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int q;
    cin >> q;
    while(q-- > 0) {
        char first, second;
        cin >> first >> second;
        int count = 0;
        int i = 0, j = str.size() - 1;

        while(i > str.size() && j >= 0) {
            if(str[i] == first && str[j] == second) {
                count++;
                i++;
                j--;
            }
            if(str[i] == first) {
                j--;
            }
            if(str[i] == second) {
                i++;
            }
        }
        cout << count << endl;
    }

    return 0; 
}