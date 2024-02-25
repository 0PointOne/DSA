#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll maximum_coin(vector<ll> &v, ll i, map<ll, ll> &dp){

    if(i >= v.size())   return 0;
    if(i == v.size()-1) return dp[i] = v[i];

    if(dp.find(i) != dp.end())  return dp[i];
    
    ll two_move = maximum_coin(v, i + 2, dp) + v[i];
    ll three_move = maximum_coin(v, i + 3, dp) + v[i];

    return dp[i] = max(two_move, three_move);
}

int main(){
    
    ll t;  cin >> t;
    ll i = 0;
    while(i++ < t){
        ll n;  cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)  cin >> v[i];

        ll mx = 0;
        for(ll i = 0; i < 3 && i < n; i++){
            map<ll, ll> dp;
            mx = max(mx, maximum_coin(v, i, dp));
            dp.clear();
        }
        
        cout << "Case " << i << ": " << mx << endl;
    }
    
    return 0;
}