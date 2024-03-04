#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, e;   cin >> n >> e;

    vector<vector<int>> adj_list(n+1);
    while(e--){
        int u, v;   cin >> u >> v;

        //* Undirected Graph
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

        //* Directed Graph
        // adj_list[u].push_back(v);

    }

    for(int i = 0; i <= n; i++){
        cout << "Node " << i << ": ";
        for(int j = 0; j < adj_list[i].size(); j++){
            cout << adj_list[i][j] << " ";
        }cout << endl;
    }
    
    return 0;
}