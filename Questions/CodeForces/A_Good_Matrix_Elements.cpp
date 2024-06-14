// Problem: A1. Good Matrix Elements
// Contest: Codeforces - ABBYY Cup 2.0 - Easy
// URL: https://codeforces.com/problemset/problem/177/A1
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	
	int arr[n][n];
	int ans_sum = 0;
	
	for(int i = 0; i < n; i++) { 
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) { 
		for(int j = 0; j < n; j++) {
			if(i == j) {
				ans_sum += arr[i][j];
			}
		}
	}
	
	int i = n - 1, j = 0;
	while(i >= 0 && j <= n - 1) {
		ans_sum += arr[i][j];
		i--;
		j++;
	}
	
	int a = (n - 1) / 2;
	for(int i = 0; i < n; i++) {
		ans_sum += (arr[i][a] + arr[a][i]);
	}
	
	cout << ans_sum - 3 * arr[a][a] << "\n";
}