#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fac(ll n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return n * fac(n-1);
}

int main() {
    ll n;
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}