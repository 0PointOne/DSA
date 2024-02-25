#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mod 1e9 + 7
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>>& m){

    bool isTrue = (x >= 0 && x < n) && (y >= 0 && y < n) && (visited[x][y] == 0) && (m[x][y] == 1);

    if(isTrue){
        return true;
    }
    else{
        return false;
    }

}

void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector< vector <int> > visited, string path){

    //! base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
    }

    visited[x][y] = 1;

    //! 4 choices -> D, R, L, U

    //* Down
    int newx = x + 1;
    int newy = y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //* Left
    newx = x, newy = y - 1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //* Right
    newx = x, newy = y + 1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //* UP
    newx = x - 1, newy = y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0;


}

int main(){
    fast_io;

    int n;
    cin >> n;

    vector< vector <int> > m(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }
    
    vector<string> ans;
    if(m[0][0] == 0){
        ans.push_back("-1");
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        return 0;
    }

    vector< vector <int> > visited(n, vector<int> (n, 0));
    int x = 0, y = 0;
    string path;

    solve(m, n, ans, x, y, visited, path);
    sort(ans.begin(), ans.end());

    if(!ans.size()){
        ans.push_back("-1");
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }cout << endl;
        return 0;
        
    }
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    
    return 0;
}   