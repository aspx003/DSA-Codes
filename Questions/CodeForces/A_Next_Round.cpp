// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n, k;
	cin >> n >> k;
	
	int a;
	for(int i = 0; i < k; i++) {
		cin >> a;
		if(a == 0) {
			cout << 0 << "\n";
			return 0;
		}
	}
	
	int b;
	for(int i = k; i < n; i++) {
		cin >> b;
		if(a != b) {
			cout << i << "\n";
			return 0;
		}
	}
	
	cout << n << endl;
	
	return 0;
}