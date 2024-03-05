#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int x, int y, vector<vector<int>>& grid){
    int n = grid.size(), m = grid[0].size();
    return x >= 0 && y >= 0 && x < n && y < m;
}
bool isIs(int x, int y, vector<vector<int>>& grid){
    int n = grid.size(), m = grid[0].size();
    return x >= 1 && y >= 1 && x < n-1 && y < m-1;
}

bool bfs(int i, int j, vector<vector<int>>& grid, vector< vector<bool> > &vis){

    bool isT = true;

    if(!isIs(i, j, grid)) isT = false;

    queue<pair<int,int> > q;
    q.push({i, j});
    vis[i][j] = true;

    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();

        for(auto it: dir){
            int x = par.first + it.first, y = par.second + it.second;

            if(valid(x, y, grid) && grid[x][y] == 0 && !vis[x][y]){
                if(isIs(x, y, grid)){
                    q.push({x, y});
                    vis[x][y] = true;
                }
                else isT = false;
            }
        }
    }
    return isT;
}

int closedIsland(vector<vector<int>>& grid) {
    
    int n = grid.size(), m = grid[0].size();
    vector< vector<bool> > vis(n, vector<bool>(m, false));

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] && grid[i][j] == 0){
                if(bfs(i, j, grid, vis))    ans++;
            }
        }
    }
    return ans;
}

int main(){
    int n, m;   cin >> n >> m;
    vector<vector<int>> grid(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    cout << closedIsland(grid) << endl;
}