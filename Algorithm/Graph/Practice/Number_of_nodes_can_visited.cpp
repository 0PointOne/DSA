#include<bits/stdc++.h>
using namespace std;

const int N = 1e4;
vector<int> adj[N];

void bfs(int src, vector<bool> &vis, int &n){

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        n++;

        for(auto child: adj[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main(){
    
    int n, e;   cin >> n >> e;
    while(e--){
        int u, v;   cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src;    cin >> src;
    int ans = 0;
    vector<bool> vis(n, false);
    bfs(src, vis, ans);
    
    cout << ans << endl;
    
    return 0;
}