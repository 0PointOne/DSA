#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define pp push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(int i = 0; i < n; i++);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    ll moves = 0;
    for(int i = 1; i < n; i++){
        if(d[i] <  d[i-1]){
            ll simMove = d[i-1] - d[i];
            moves += simMove;
            d[i] += simMove;
        }
        
    }
    cout << moves << endl;

    return 0;
}