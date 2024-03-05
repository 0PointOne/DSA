#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
vector<bool> vis(1005, false);
vector<int> level(1005, -1);

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

    int src;    cin >> src;
    bfs(src);

    for(int i = 0; i <= n; i++){
        if(level[i] != -1)  cout << i << "'s Level: " << level[i] << endl;
    }
    
    return 0;
}