#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define prll_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define prll_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;


ll total(vector<vector<ll> > &v, ll i, ll j){
    
    
    if(i == v.size()-1 && j == v[0].size()-1)   return v[i][j];

    if(i == v.size() || j == v[0].size())         return -1e18;

    ll a = total(v, i + 1, j);
    ll b = total(v, i, j + 1);

    return v[i][j] + max(a, b);
}

void solve(){
    
    ll n, m;  cin >> n >> m;
    vector<vector<ll> > v(n, vector<ll> (m));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++)  cin >> v[i][j];
    }

    cout << total(v, 0, 0) << endl;
}

int main(){
    fast_io;

    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}