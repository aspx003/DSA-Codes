#include<bits/stdc++.h>
using namespace std;

bool make_equal (string &T, string &S) {
   unordered_map<char, int> m;

   for(int i = 0; i < T.size(); i++) {
    m[T[i]]++;
    m[S[i]]++;
   }
   int count = 0;
   for(auto &pr: m) {
    if(pr.second % 2 != 0) {
        count++;
    }
   }

   if(count > 1) {
    return false;
   }

   return true;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string T;
    cin >> T;
    string S;
    cin >> S;

    bool out_;
    out_ = make_equal(T, S);
    cout << (out_ ? "YES" : "NO");
}