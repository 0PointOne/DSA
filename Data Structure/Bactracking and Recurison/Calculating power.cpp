#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

long long power(long long a, long long b){

    if(b == 0)      return 1;
    if(b == 1)      return a;

    long long ans = power(a, b/2);

    if(b % 2 == 0)      return ans * ans;
    else                return a * ans * ans;
    
}
int main(){
    fast_io;
    
    long long a, b;
    cin >> a >> b;

   cout << power(a, b) << endl;

    return 0;
}