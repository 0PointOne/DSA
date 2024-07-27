#include<bits/stdc++.h>
#define int long long int
#define nline "\n"
using namespace std;

int maxSum(vector<vector<int> > &v, int i, int j, vector<vector<int> > &dp){

    if(i >= v.size() || j >= v[0].size())     return LLONG_MIN;
    if(i == v.size()-1 && j == v[0].size()-1) return v[v.size()-1][v[0].size()-1];

    if(dp[i][j] != -1)                        return dp[i][j];
    return dp[i][j] = v[i][j] + max(maxSum(v, i, j + 1, dp), maxSum(v, i+1, j, dp));
}

signed main(){
    int n, m;   cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m));
    vector<vector<int> > dp(n, vector<int>(m, -1));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)  cin >> v[i][j];
    }
    cout << maxSum(v, 0, 0, dp) << "\n";
    return 0;
}