#include<bits/stdc++.h>
using namespace std;

const int N = 1e4;
vector<int> adj[N];

void bfs(int src, vector<bool> &vis){

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int par = q.front();
        q.pop();

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

    int com = 0;
    vector<bool> vis(n, false);
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            bfs(i, vis);
            com++;
        }
    }
    
    cout << com << endl;
    
    return 0;
}