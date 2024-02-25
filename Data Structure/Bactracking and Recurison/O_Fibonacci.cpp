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

vector<ll> dp(1e5, -1);

ll fibo(ll n){
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n-1) + fibo(n-2);
}

void solve(){
    dp[1] = 0;
    dp[2] = 1;
    ll n;  cin >> n;
    cout << fibo(n) << endl;
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