#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
vector<bool> vis(1005, false);
vector<int> level(1005, -1);
vector<int> parent(1005, -1);

void bfs(int src){

    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(auto child: adjList[par]){
            
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}


int main(){
    
    int n, e;   cin >> n >> e;

    while(e--){
        int u, v;   cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int src, des;    cin >> src >> des;
    bfs(src);

    vector<int> ans;
    int x = des;
    while(x != -1){
        ans.push_back(x);
        x = parent[x];
    }

    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}