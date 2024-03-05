#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adj[N];


void bfs(int src, vector<int> &vis, vector<int> &level){

    queue<int> q;
    q.push(src);
    level[src] = 0;
    vis[src] = true;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(auto child: adj[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
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

    int q;  cin >> q;
    while(q--){
        int src, dis;   cin >> src >> dis;
        vector<int> vis(n, false);
        vector<int> level(n, -1);

        bfs(src, vis, level);
        if(!vis[dis])   cout << -1 << endl;
        else            cout << level[dis] << endl;
    }

    
    return 0;
}