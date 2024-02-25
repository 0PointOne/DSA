#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)      cin >> v[i];
    
    int sum;    cin >> sum;

    vector<vector<int> > dp(n+1, vector<int> (sum+1, 0));

    dp[0][0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= sum; j++){

            if(v[i - 1] <= j)     dp[i][j] = dp[i - 1][j - v[i-1]]  +  dp[i-1][j];
            else                  dp[i][j] = dp[i-1][j];
            
        }
    }

    /* for(int i = 0; i <= n; i++){
        for(int j = 0; j <= sum; j++){
            cout << dp[i][j] << " ";
        }cout << endl;
    } */

    cout << dp[n][sum] << endl;
    
    return 0;
}