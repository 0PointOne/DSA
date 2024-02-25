#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector< vector<int> > dp(1e3, vector<int>(1e3, -1));

int count_Subset_sum(vector<int> &v, int n, int sum){
    
    if(n == 0){
        if(sum == 0)  return 1;
        else        return 0;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        int op1 = count_Subset_sum(v, n-1, sum - v[n-1]);
        int op2 = count_Subset_sum(v, n-1, sum);

        return dp[n][sum] = op1 + op2;
    }
    
    return dp[n][sum] = count_Subset_sum(v, n - 1, sum);
    
    
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

    cout << count_Subset_sum(v, n, sum) << endl;
}