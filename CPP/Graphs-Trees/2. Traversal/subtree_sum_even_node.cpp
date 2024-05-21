#include<bits/stdc++.h>
using namespace std;

// subtree sum + even nodes

const int N = 1e5 + 10;
vector<int> g[N];
int subtree_sum[N];
int val[N];

void dfs(int vertex, int par=0) {

    // subtree_sum[vertex] += val[vertex];
    subtree_sum[vertex] += vertex;
    for(int child: g[vertex]) {
        if(child == par) continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
    }
}

int main() {
    // taking inputs
    int n, m;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);

    int q;
    cin >> q;
    while(q--) {
        int v;
        cin >> v;
        cout << subtree_sum[v] << "\n";
    }
}