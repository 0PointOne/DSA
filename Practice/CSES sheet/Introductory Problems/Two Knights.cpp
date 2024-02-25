#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num;
    cin >> num;
    for(ll i = 1; i <= num; i++ ){
        ll totalPosi = (i*i) * (i*i-1) / 2;
        ll attPosi = 4*(i-1)*(i-2);
        ll ans = totalPosi - attPosi;
        cout << ans << endl;
    }
    return 0;
}