#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fast_io;

    int n;
    cin >> n; 
    
    vector<int> pri_fac;
    while(n % 2 == 0){
        pri_fac.push_back(2);
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            pri_fac.push_back(i);
            n /= i;
        }
    }
    if(n > 2){
        pri_fac.push_back(n);
    }

    for(int i = 0; i < pri_fac.size(); i++){
        cout << pri_fac[i] << " ";
    }
    return 0;
}