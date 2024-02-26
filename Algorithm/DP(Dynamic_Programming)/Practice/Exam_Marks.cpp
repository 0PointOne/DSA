#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t;  cin >> t;
    while(t--){

        int n, mark;  cin >> n >> mark;
        vector<int> v(n);
        for(int i = 0; i < n; i++)      cin >> v[i];

        if(mark == 1000){
            cout << "YES" << endl;
            continue;
        }

        int need = 1000 - mark;

        vector<vector<bool> > dp(n+1, vector<bool> (need+1, false));

        dp[0][0] = true;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= need; j++){

                if(v[i - 1] <= j)     dp[i][j] = dp[i - 1][j - v[i-1]]  ||  dp[i-1][j];
                else                  dp[i][j] = dp[i-1][j];
                
            }
        }

        cout << (dp[n][need]  ?   "YES"   :   "NO")  << endl;

    }
    
    return 0;
}