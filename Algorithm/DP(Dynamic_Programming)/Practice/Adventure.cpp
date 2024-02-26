#include<bits/stdc++.h>
using namespace std;
int n, w;

int max_value(int n, int w, vector<int> &we, vector<int> &val, vector<vector<int> > &dp){


    if(n < 0 || w == 0) return 0;

    if(dp[n][w] != -1)          return dp[n][w];

    int op1 = max_value(n - 1, w, we, val, dp);
    int op2 = 0;
    if(we[n-1] <= w){
        op2 = max_value(n - 1, w - we[n-1], we, val, dp) + val[n-1];
    }

    return dp[n][w] = max(op1, op2);

}

int main(){
    
    int t;  cin >> t;
    while(t--){

        cin >> n >> w;
        vector<int>weight(n), value(n);
        for(int i = 0; i < n; i++)  cin >> weight[i];
        for(int i = 0; i < n; i++)  cin >> value[i];

        vector<vector<int> > dp(n + 1, vector<int>(w + 1, -1));
        cout << max_value(n, w, weight, value, dp) << endl;
    }
    
    return 0;
}