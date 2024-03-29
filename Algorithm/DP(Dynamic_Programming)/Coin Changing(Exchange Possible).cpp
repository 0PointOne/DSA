#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;  cin >> n;
    vector<int> coin(n);

    for(int i = 0; i < n; i++)  cin >> coin[i];

    int t; cin >> t;

    bool dp[n+1][t+1];
    dp[0][0] = true;
    for(int i = 1; i <= t; i++) dp[0][i] = false;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= t; j++){
            
            if(coin[i-1] <= j)    dp[i][j] = dp[i][j - coin[i-1]]  || dp[i-1][j];

            else                dp[i][j] = dp[i-1][j];
        }
    }

    cout << (dp[n][t]  ?   "YES"  :  "NO")  << endl;
    
    return 0;
}