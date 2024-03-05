#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, e;   cin >> n >> e;
    vector<int> adj[n];

    while(e--){
        int u, v;   cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int node;   cin >> node;
    cout << adj[node].size() << endl;
    
    return 0;
}