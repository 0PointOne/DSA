#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;  cin >> n;
    vector<int> v(n), w(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    for(int i = 0; i < n; i++)  cin >> w[i];

    int sum;    cin >> sum;

    vector<vector<int> > dp(n+1, vector<int> (sum+1, -1));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= sum; j++){
            if(i == 0 || j == 0)    dp[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            
            if(w[i-1] <= j)     dp[i][j] = max(v[i-1] + dp[i][j - w[i-1]], dp[i-1][j]);
            else                dp[i][j] = dp[i-1][j];
        }
    }

    cout << dp[n][sum] << endl;
    
    return 0;
}