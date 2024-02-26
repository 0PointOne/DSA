#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool can_reach(ll i, ll target, vector<ll> &dp){


    if(i > target)  return false;
    if(i == target) return true;

    if(dp[i] != -1) return dp[i];
    
    return dp[i] = can_reach(i + 3, target, dp) || can_reach(i * 2, target, dp);

}

int main(){
    
    ll t;  cin >> t;
    while(t--){

        ll n; cin >> n;
        vector<ll> dp(n+1, -1);
        cout << (can_reach(1, n, dp)  ?  "YES"   :    "NO") << endl;
        
    }
    
    return 0;
}