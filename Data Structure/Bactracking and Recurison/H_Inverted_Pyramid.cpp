#include<bits/stdc++.h>
#define ll long long
using namespace std;

void print_star(int n){
    if(n == 0)  return;
    cout << "*";
    print_star(n-1);
}

void print_space(int n){
    if(n == 0)  return;
    cout << " ";
    print_space(n-1);
}

void print(int n, int i){
    if(i == 0)  return;
    print_space(n - i);
    print_star(i * 2 - 1);
    cout << endl;
    print(n, i -= 1);
}

void solve(){
    int n;  cin >> n;
    print(n, n);
}

int main(){

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}