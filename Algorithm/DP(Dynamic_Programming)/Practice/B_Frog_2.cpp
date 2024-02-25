#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;

vector<ll> dp(N, -1);

ll fr(vector<ll> &v, int k, int i){
    if(i == v.size()-1)     return 0;

    if(dp[i] != -1)         return dp[i];

    long long cost = LLONG_MAX;
    for(int j = 1; j <= k && (i + j) < v.size(); j++){
        cost = min(cost, fr(v, k, i + j) + abs(v[i] - v[i+j]));
    }
    
    return dp[i] = cost;
}

int main(){
    
    int n, k;   cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    cout << fr(v, k, 0) << endl;
    
    return 0;
}