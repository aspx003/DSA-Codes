#include<bits/stdc++.h>
using namespace std;

// initialisation
// declaring global variables
const int N = 1e5 + 10;
vector<int> g[N];

// visited array
/*  
    Note:
    Making arrays global automatically
    initialises all values with 0's
*/
bool vis[N];

void dfs(int vertex) {
    // 1. Take action on vertex after entering the vertex.

    // both are correct though!
    // if(vis[vertex])
    //     return;
    cout << vertex << "\n";
    vis[vertex] = true;
    for(int child: g[vertex]) {
        cout << "Parent: " << vertex << " Child: " << child << endl;
        if(vis[child]) continue; // or
        // 2. Take action on child before entering the child node.
        dfs(child);
        // 3. Take action on child after exiting the child node.
    }
    // 4. Take action on vertex before exiting the vertex.
}

int main() {
    // taking inputs
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        // make the adjacency list
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
}