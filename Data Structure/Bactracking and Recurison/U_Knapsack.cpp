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

int knapSack(vector<pair<int, int> > &v, int i, int w){

    if(i == v.size() || w <= 0)  return 0;

    int a, b;
    if(v[i].first <= w){
        a = knapSack(v, i + 1, w - v[i].first) + v[i].second;
        b = knapSack(v, i + 1, w);
        return max(a, b);
    }
    else    return knapSack(v, i+1, w);
    // return max(a, b);
}

void solve(){
    
    int n, w;   cin >> n >> w;
    vector<pair<int, int> > v;

    int a, b, i;
    for(i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }

    cout << knapSack(v, 0, w) << endl;
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