#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, e;   cin >> n >> e;
    vector<pair<int, int> > edge_list;

    while(e--){
        int u, v;   cin >> u >> v;
        edge_list.push_back({u, v});
    }
    
    for(auto p: edge_list) cout <<  p.first << " " << p.second << endl;
    cout << endl;

    //* From adj_List to Edge_list
    vector< vector<int> > adj_list = {
        {},             //0
        {3, 4},         //1
        {1, 3, 4},      //2
        {1, 2},         //3
        {1, 2}          //4
    };

    edge_list.clear();
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < adj_list[i].size(); j++){
            edge_list.push_back({i, adj_list[i][j]});
        }
    }

    for(auto p: edge_list) cout <<  p.first << " " << p.second << endl;
    

    return 0;
}