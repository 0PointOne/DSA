#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<long long> dp(N, -1);
long long minimum_cost(vector<int> &v, int i){

    if(i == v.size()-1)    return 0;
    if(dp[i] != -1)         return dp[i];
    long long op1 = minimum_cost(v, i+1) + abs(v[i] - v[i+1]);

    long long op2 = LLONG_MAX;
    if(i < v.size()-2){
        op2 = minimum_cost(v, i+2) + abs(v[i] - v[i+2]);
    }
    return dp[i] = min(op1, op2);
}

int main(){
    
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << minimum_cost(v, 0) << endl;
    
    return 0;
}