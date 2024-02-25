#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, w;   cin >> n >> w;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int a, b;   cin >> a >> b;
        v.push_back({a, b});
    } 

    vector<vector<int> > dp(n + 1, vector<int> (w + 1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(v[i].first <= j){
                int op1 = dp[i-1][j - v[i-1].first] + v[i-1].second;
                int op2 = dp[i-1][j];

                dp[i][j] = max(op1, op2);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= w; j++){
    //         cout << dp[i][j] << " ";
    //     }cout << endl;
    // }
    cout << dp[n][w] << endl;
    return 0;
}