#include<bits/stdc++.h>
using namespace std;

const int n = 1e3;
vector<vector<int> > dp(n, vector<int> (n, -1));

int knapsack(vector<pair<int, int> > &v, int n, int w){

    if(n < 0 || w == 0) return 0;

    if(dp[n][w] != -1)   return dp[n][w];
    if(v[n].first <= w){
        
        int op1 = knapsack(v, n-1, w - v[n].first) + v[n].second;
        int op2 = knapsack(v, n-1, w);
        return dp[n][w] = max(op1, op2);
    }
    else{
        return dp[n][w] = knapsack(v, n-1, w);
    }
}

int main(){
    
    int n, w;   cin >> n >> w;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int a, b;   cin >> a >> b;
        v.push_back({a, b});
    }

    cout << knapsack(v, n-1, w) << endl;
    return 0;
}