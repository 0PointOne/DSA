#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int n;  cin >> n;
    vector<int> v(n);

    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    vector<vector<bool> > dp(n + 1, vector<bool> (sum + 1, false));
        
    dp[0][0] = true;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= sum; j++){

            if(v[i - 1] <= j)     dp[i][j] = dp[i - 1][j - v[i-1]]  ||  dp[i-1][j];
            else                  dp[i][j] = dp[i-1][j];

        }
    }

    vector<int> ans;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= sum; j++){
            if(dp[i][j])        ans.push_back(j);
        }
    }

    int mn_diff = INT_MAX;
    for(auto it: ans){
        int s1 = it,  s2 = sum - it;
        mn_diff = min(mn_diff, abs(s2 - s1));
    }
    cout << mn_diff << endl;

    
    return 0;
}