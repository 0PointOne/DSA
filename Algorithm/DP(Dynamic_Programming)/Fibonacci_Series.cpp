#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<long long> dp(N, -1);

long long fibo(int n){

    if(n <= 1)   return n; 
    if(dp[n] != -1) return dp[n]; 

    long long ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}

int main(){
    
    int n;  cin >> n;
    cout << fibo(n) << endl;
    
    return 0;
}