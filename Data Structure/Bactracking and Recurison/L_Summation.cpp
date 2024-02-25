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

ll summation(vector<ll> &v, ll i, ll sum){
    if(i == v.size())   return sum;
    return summation(v, i+1, sum + v[i]);
}

void solve(){
    
    ll n;  cin >> n;
    vector<ll> v(n);
    input_v(v);
    cout << summation(v, 0, 0) << endl;
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