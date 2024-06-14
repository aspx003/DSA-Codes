#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // dfs for checking cycle
    bool dfs(int vertex, int parent, vector<int> adj[], vector<int> vis) {
        vis[vertex] = 1;

        for(auto child: adj[vertex]) {
            if(!vis[child]) {
                if(dfs(child, vertex, adj, vis)) {
                    return true;
                } else if(child != parent) {
                    return true;
                }
            }
        }

        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        std::vector<int> vis(V + 1, 0);

        for (int i = 0; i < V; ++i)
        {
            if(!vis[i]) {
                if(dfs(i, -1, adj, vis)) return true;
            }
        }

        return false;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}