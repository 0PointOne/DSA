#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > dp(1005, vector<int> (1005, -1));

int unbounded_Knapsack(int n, int s, vector<int> &val, vector<int> &weight){

    if(n == 0 || s == 0)    return 0;

    if(dp[n][s] != -1)  return dp[n][s];

    int ch1 = unbounded_Knapsack(n-1, s, val, weight);
    int ch2 = 0;
    if(weight[n-1] <= s)        ch2 = unbounded_Knapsack(n, s - weight[n-1], val, weight) + val[n-1];
    return dp[n][s] = max(ch1, ch2);
}

int main(){
    
    int n, w;   cin >> n >> w;

    vector<int> val(n), weight(n);
    for(int i = 0; i < n; i++)  cin >> val[i];
    for(int i = 0; i < n; i++)  cin >> weight[i];

    cout << unbounded_Knapsack(n, w, val, weight) << endl;

    return 0;
}