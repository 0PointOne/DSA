#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > dp(1005, vector<int>(1005, -1));

int unbounded_Knapsack(int n, int sz, vector<int> &v, vector<int> &w){

    if(n == 0 || sz == 0)   return 0;
    if(dp[n][sz] != -1)     return dp[n][sz];

    int op1 = unbounded_Knapsack(n-1, sz, v, w);
    int op2 = 0;
    if(w[n-1] <= sz)   op2 = unbounded_Knapsack(n, sz - w[n-1], v, w) + v[n-1];

    return dp[n][sz] = max(op1, op2);
}

int main(){
    
    int n;  cin >> n;
    vector<int> v(n), w(n);
    iota(w.begin(), w.end(), 1);

    for(int i = 0; i < n; i++)  cin >> v[i];
    
    cout << unbounded_Knapsack(n, n, v, w) << endl;

    return 0;
}