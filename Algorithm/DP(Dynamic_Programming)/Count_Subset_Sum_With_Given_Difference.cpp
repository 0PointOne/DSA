#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector< vector<int> > dp(1e3, vector<int>(1e3, -1));

//! 1:
int cout_sub_Set(vector<int> &v, int i, int sum){

    if(sum == 0)    return 1;
    if(i == v.size())    return 0;
    if(dp[i][sum] != -1) return dp[i][sum];
    if(v[i] <= sum)      return dp[i][sum] = cout_sub_Set(v, i+1, sum - v[i]) + cout_sub_Set(v, i + 1, sum);

    return dp[i][sum] = cout_sub_Set(v, i + 1, sum);
}


//! Or:

int cout_sub_Set1(vector<int> &v, int n, int sum){
    
    if(n == 0){
        if(sum == 0)  return 1;
        else        return 0;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        int op1 = cout_sub_Set1(v, n-1, sum - v[n-1]);
        int op2 = cout_sub_Set1(v, n-1, sum);

        return dp[n][sum] = op1 + op2;
    }
    
    return dp[n][sum] = cout_sub_Set1(v, n - 1, sum);
    
    
}

int main(){
    int n;  cin >> n;
    vector<int> v(n);

    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }      
    
    int diff;   cin >> diff;

    int terget_sum = (diff + sum) / 2;

    cout << cout_sub_Set(v, 0, terget_sum) << endl;
    // cout << subset_sum1(v, n, sum) << endl;
}