#include<bits/stdc++.h>
using namespace std;

int lcs(string a, int n, string b, int m, vector< vector<int> > &dp){

    if(n == 0 || m == 0)    return 0;
    if(dp[n][m] != -1)      return dp[n][m];

    if(a[n-1] == b[m-1])    return dp[n][m] = 1 + lcs(a, n-1, b , m-1, dp);

    return dp[n][m] = max(lcs(a, n, b, m-1, dp), lcs(a, n-1, b, m, dp));
    
}

int main(){
    
    string a, b;    cin >> a >> b;

    vector< vector<int> > dp(a.size()+1, vector<int>(b.size()+1, -1));

    cout << lcs(a, a.size(), b, b.size(), dp) << endl;
    
    return 0;
}