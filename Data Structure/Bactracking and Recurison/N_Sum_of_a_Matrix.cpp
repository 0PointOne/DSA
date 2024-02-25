#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;

void sum(vector<vector<int> > &a, vector<vector<int> > &b, int i, int j){

    if(j == a[0].size()){
        i++;
        j = 0;
    }    
    if(i == a.size())   return;


    a[i][j] += b[i][j];

    sum(a, b, i, j + 1);

}

void solve(){
    int n, m;   cin >> n >> m;

    vector<vector<int> > a(n, vector<int>(m));
    vector<vector<int> > b(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }  
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        } 
    }
    
    sum(a, b, 0, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        } 

        cout << endl;
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