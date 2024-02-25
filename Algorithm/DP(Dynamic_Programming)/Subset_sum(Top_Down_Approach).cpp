#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > dp(1e3, vector<int>(1e3, -1));

bool find(vector<int> &v, int n, int sum){
    
    if(n == 0){
        if(sum == 0)  return true;
        else        return false;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        bool op1 = find(v, n-1, sum - v[n-1]);
        bool op2 = find(v, n-1, sum);

        return dp[n][sum] = op1 || op2;
    }
    else{
        return dp[n][sum] = find(v, n - 1, sum);
    }
    
}


int main(){
    
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // int q;  cin >> q;
    // while(q--){
        int sum;    cin >> sum;
        cout << (find(v, n, sum) ?  "YES"  :  "NO")  << endl;
    // }
    
    return 0;
}