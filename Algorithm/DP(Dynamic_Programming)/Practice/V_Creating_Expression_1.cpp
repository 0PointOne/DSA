#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<pair<int, int>, bool > dp;
bool isPos(vector<ll> &v, ll i, ll cal,int x){

    if(i == v.size()){
        if(cal == x)  return true;
        else        return false;
    }
    if(dp.find({i, cal}) != dp.end())   return dp[{i, cal}];

    bool op1 = isPos(v, i+1, cal + v[i], x);
    bool op2 = isPos(v, i+1, cal - v[i], x);

    return dp[{i, cal}] = op1 || op2;
}


int main(){
    
    ll n, x;    cin >> n >> x;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    cout << (isPos(v, 1, v[0],x)  ?  "YES"  : "NO") << endl;
    return 0;
}