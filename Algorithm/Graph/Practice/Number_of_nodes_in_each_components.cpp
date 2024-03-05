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

    vector<bool> vis(n, false);

    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            int no = 0;
            bfs(i, vis, no);
            ans.push_back(no);
        }
    }
    
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    
    return 0;
}