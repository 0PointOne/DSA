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

    vector<int> vis(n, false);
    vector<int> level(n, -1);

    bfs(0, vis, level);
    
    int l;  cin >> l;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(level[i] == l)           ans.push_back(i);
    }

    sort(ans.begin(), ans.end(), greater<>());

    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    
    return 0;
}