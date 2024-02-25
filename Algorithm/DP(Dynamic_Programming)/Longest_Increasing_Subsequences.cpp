#include<bits/stdc++.h>
using namespace std;

int dp[10005];

int longest_sub(vector<int> &v, int ind){
    if(dp[ind] != -1)     return dp[ind];

    int cnt = 1;
    for(int i = 0; i < ind; i++){
        if(v[i] < v[ind]){
            cnt = max(cnt, longest_sub(v, i) + 1);
        }
    }

    return dp[ind] = cnt;
}

int main(){
    
    memset(dp, -1, sizeof(dp));
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int ans = 0;
    for(int i = 0; i <= n; i++){
        ans = max(ans, longest_sub(v, i));
    }
    cout << ans << endl;

    return 0;
}