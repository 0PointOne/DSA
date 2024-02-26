#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > dp(1e3, vector<int>(1e3, -1));

int count_Sub(vector<int> &v, int n, int sum){
    
    if(n == 0){
        if(sum == 0)  return 1;
        else        return 0;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        int op1 = count_Sub(v, n-1, sum - v[n-1]);
        int op2 = count_Sub(v, n-1, sum);

        return dp[n][sum] = op1 + op2;
    }

    return dp[n][sum] = count_Sub(v, n - 1, sum);
 
}

int main(){
    
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)      cin >> v[i];
    
    int sum;    cin >> sum;

    cout << count_Sub(v, n, sum) << endl;
    
    return 0;
}