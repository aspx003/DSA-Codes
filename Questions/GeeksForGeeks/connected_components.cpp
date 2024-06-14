#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void dfs(int vertex, vector<int> adjLs[], int vis[]) {
        vis[vertex] = 1;

        for(int child: adjLs[vertex]) {
            if(!vis[child]){
                dfs(child, adjLs, vis); 
            }
        }
    }
     
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjLs[V]; 
        
        for(int i = 0;i<V;i++) {
            for(int j = 0;j<V;j++) {
                if(adj[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j); 
                    adjLs[j].push_back(i); 
                }
            }
        }
        
        int count = 0;
        int vis[V] = {0};
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                count++;
                dfs(i, adjLs, vis);
            }
        }
        
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}