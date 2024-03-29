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

bool isPos(vector<ll> &v, ll i, ll cal,int x){

    if(i == v.size()){
        if(cal == x)  return true;
        else        return false;
    }

    bool op1 = isPos(v, i+1, cal + v[i], x);
    bool op2 = isPos(v, i+1, cal - v[i], x);

    return op1 || op2;
}


void solve(){
    
    ll n, x;    cin >> n >> x;
    vector<ll> v(n);
    input_v(v);

    cout << (isPos(v, 1, v[0],x)  ?  "YES"  : "NO") << endl;
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