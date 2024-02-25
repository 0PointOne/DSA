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

bool isPali(vector<int> &v, int s, int e){
    if(s >= e)   return true;
    return v[s] == v[e] && isPali(v, s + 1, e - 1);
}

void solve(){
    
    int n;  cin >> n;
    vector<int> v(n);
    input_v(v);

    cout << (isPali(v, 0, n-1) ? "YES" : "NO") << endl;
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