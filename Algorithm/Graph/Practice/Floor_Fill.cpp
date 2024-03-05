#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int x, int y, vector<vector<int>>& image){
    int n = image.size(), m = image[0].size();
    return x >= 0 && y >= 0 && x < n && y < m;
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int s = image[sr][sc];
    int n = image.size(), m = image[0].size();

    vector<vector<int> > vis(n, vector<int> (m, false));

    queue<pair<int, int> > q;
    q.push({sr, sc});
    vis[sr][sc] = true;
    image[sr][sc] = color;

    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();

        for(auto it: dir){
            int x = it.first + par.first, y = it.second + par.second;
            if(isValid(x, y, image) && image[x][y] == s && !vis[x][y]){
                q.push({x, y});
                image[x][y] = color;
                vis[x][y] = true;
            }

        }
    }

    return image;
}

int main(){
    
    int n, m;   cin >> n >> m;
    vector<vector<int>> image(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> image[i][j];
        }
    }

    int sr, sc, color;  cin >> sr >> sc >> color;
    vector<vector<int>> ans = floodFill(image, sr, sc, color);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }
    
    return 0;
}