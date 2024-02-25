//? Not Completed.
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define scanf_v for(auto &it : v)   cin >> it;
using namespace std;
using namespace __gnu_pbds;
template<class T> using od_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

const int n = 20;
int maze[n][n];

vector< pair<int, int> > dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int vis[n][n];

int row = 0, col = 0;

bool valid(int x, int y){
    return (x >= 0 && y >= 0 && x < row && y < col && maze[x][y] != -1 && !vis[x][y]);
}

void bfs(pair<int, int> src){

    queue<pair<int, int> > q;
    q.push(src);
    vis[src.first][src.second] = true;

    while(!q.empty()){

        auto pr = q.front();
        q.pop();

        int x = pr.first, y = pr.second;
        for(auto it: dir){
            int r = x + it.first, c = y + it.second;
            if(valid(r, c)){
                q.push({r, c});
                vis[r][c] = true;
            }
        }
    }

}

void solve(){
    
    int n, m;   cin >> n >> m;
    row = n;    col = m;

    pair<int, int> src, dst;

    for(int i = 0; i < n; i++){
        string s;   cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j] == '#'){
                maze[i][j] = -1;
            }
            else if(s[j] == 'A'){
                src = {i,j};
            }
            else if(s[j] == 'B'){
                dst = {i, j};
            }
        }
    }

    bfs(src);
    
    if(vis[dst.first][dst.second]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
        return;
    }
    
}

int main(){
    fast_io;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}