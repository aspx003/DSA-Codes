#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int depth[N];

void dfs(int v, int par = -1)
{
    for (int child : g[v])
    {
        if (child == par)
            continue;
        depth[child] = depth[v] + 1; // calculate depth of child from parent
        dfs(child, v);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);

    int mx_depth = 1;
    int mx_d_node;

    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i]; // find max depth
            mx_d_node = i;       // find the node with max depth
        }
        depth[i] = 0; // reset the depth array
    }

    dfs(mx_d_node); // run the array from max depth node

    mx_depth = -1;

    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i]; // find max depth
        }
    }

    cout << mx_depth << endl;

    return 0;
}