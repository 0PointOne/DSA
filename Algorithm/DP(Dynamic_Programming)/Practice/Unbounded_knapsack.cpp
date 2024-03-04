#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > dp(1005, vector<int>(1005, -1));

int unbounded_knapSack(int n, int sz, vector<int> &v, vector<int> &w){

    if(n == 0 || sz == 0)   return 0;

    if(dp[n][sz] != -1)     return dp[n][sz];

    int ch1 = unbounded_knapSack(n-1, sz, v, w);
    int ch2 = 0;
    if(w[n-1] <= sz)    ch2 = unbounded_knapSack(n, sz - w[n-1], v, w) + v[n-1];

    return dp[n][sz] = max(ch1, ch2);
}

int main(){
    
    int n;  cin >> n;
    vector<int> v(n), w(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    for(int i = 0; i < n; i++)  cin >> w[i];

    int sum;    cin >> sum;

    cout << unbounded_knapSack(n, sum, v, w) << endl;
    
    return 0;
}