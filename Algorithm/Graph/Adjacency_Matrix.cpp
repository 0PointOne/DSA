#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, e;   cin >> n >> e;

    vector<vector<int>> adj_Mat(n+1, vector<int>(n+1, 0));
    while(e--){
        int u, v;   cin >> u >> v;

        //* Undirected Graph
        adj_Mat[u][v] = 1;
        adj_Mat[v][u] = 1;

        //* Directed Graph
        adj_Mat[u][v] = 1;
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++) cout << adj_Mat[i][j] << " ";
        cout << endl;
    }
    
    cout << endl;
    int a, b;   cin >> a >> b;
    cout << (adj_Mat[a][b] == 1  ?  "Connected"    :    "Not Connected") << endl; 
    return 0;
}