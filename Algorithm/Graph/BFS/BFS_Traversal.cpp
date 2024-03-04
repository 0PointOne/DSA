#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
vector<bool> vis(1005, false);

void bfs(int src){

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        cout << par << " ";
        for(auto child: adjList[par]){
            
            if(vis[child] == false){
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
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int src;    cin >> src;
    bfs(src);
    
    return 0;
}