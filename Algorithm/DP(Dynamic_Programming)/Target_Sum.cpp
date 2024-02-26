#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector< vector<int> > dp(1e3, vector<int>(1e3, -1));

bool make(vector<int> &v, int n, int sum){
    
    if(n == 0){
        if(sum == 0)  return true;
        else        return false;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        bool op1 = make(v, n-1, sum - v[n-1]);
        bool op2 = make(v, n-1, sum);

        return dp[n][sum] = op1 || op2;
    }
    
    return dp[n][sum] = make(v, n - 1, sum);
    
    
}

int main(){
    int n, target;  cin >> n >> target;
    vector<int> v(n);

    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }    

    target = (target + sum);
    if(target & 1){
        cout << "NO" << endl;
    }
    else{
        cout << (make(v, n, target/2) ?  "YES"  :  "NO" )  << endl;
    }

}