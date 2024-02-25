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

int step(int s, int e){

    if(s == e){
        return 1;
    }
    int a = 0, b = 0, c = 0;
    if(s + 3 <= e){
        a += step(s + 3, e);
    }
    if(s + 2 <= e){
        b += step(s + 2, e);
    }
    if(s + 1 <= e){
        c += step(s + 1, e);
    }

    return a + b + c;
}

void solve(){
    
    int s, e;   cin >> s >> e;
    cout << step(s, e) << endl;
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