#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> u_map;

    for (int i = 0; i < 4; i++)
    {
        u_map[arr[i]]++;
    }

    int sum = 0;
    for(auto pr: u_map) {
        if(pr.second > 1) {
            sum += pr.second - 1;
        }
    }

    cout << sum << "\n";
}