#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        long long posiSqu = max(x,y);
        // cout << posiSqu << endl;

        long long ans = (posiSqu-1)*(posiSqu-1);
        if(posiSqu % 2 == 0){
            ans += x;
            ans += posiSqu-y;
        }
        else{
            ans += y;
            ans += posiSqu-x;
        }
        cout << ans << endl;
    }
    return 0;
}