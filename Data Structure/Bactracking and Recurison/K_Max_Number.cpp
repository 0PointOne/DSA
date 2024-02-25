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

int mxNum(vector<int> &v, int i, int mx){
    if(i == v.size())     return mx;

    return mxNum(v, i+1, max(mx, v[i]));
}

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    input_v(v);
    cout << mxNum(v, 0, INT_MIN);
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