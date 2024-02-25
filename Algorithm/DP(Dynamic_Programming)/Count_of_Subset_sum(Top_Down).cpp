#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > dp(1e3, vector<int>(1e3, -1));

//! 1:
int count_subset(vector<int> &v, int i, int sum){

    if(sum == 0)    return 1;
    if(i == v.size())    return 0;
    if(dp[i][sum] != -1) return dp[i][sum];
    if(v[i] <= sum)      return dp[i][sum] = count_subset(v, i+1, sum - v[i]) + count_subset(v, i + 1, sum);

    return dp[i][sum] = count_subset(v, i + 1, sum);
}


//! Or:

int count_subset1(vector<int> &v, int n, int sum){
    
    if(n == 0){
        if(sum == 0)  return 1;
        else        return 0;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        int op1 = count_subset1(v, n-1, sum - v[n-1]);
        int op2 = count_subset1(v, n-1, sum);

        return dp[n][sum] = op1 + op2;
    }

    return dp[n][sum] = count_subset1(v, n - 1, sum);

    
}

int main(){
    
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)      cin >> v[i];
    
    int sum;    cin >> sum;

    cout << count_subset(v, 0, sum) << endl;
    // cout << count_subset1(v, n, sum) << endl;
    
    return 0;
}