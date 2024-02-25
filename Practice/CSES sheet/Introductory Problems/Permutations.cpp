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
    vector<ll> sol;
    if(n == 1){
        cout << 1 ;
        return 0;
    }
    else if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }

    else{
        int k = 2;
        int l = 1;
        while(k <= n){
            cout << k << " ";
            k += 2;
        }
        while(l <= n){
            cout << l << " ";
            l += 2;
        }
    }
    return 0;
}