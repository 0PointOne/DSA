#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool printSub(int arr[], vector<int> &sub, int n, int idx, int s, int sum){
    if(n == idx){
        if(sum == s){
            for(auto it : sub)  cout << it << " ";
            cout << endl;
            return true;
        }
        else return false;
    }
    sub.push_back(arr[idx]);
    s += arr[idx];
    if(printSub(arr, sub, n, idx+1, s, sum) == true)    return true;

    s -= arr[idx];
    sub.pop_back();
    if(printSub(arr, sub, n, idx+1, s, sum) == true)    return true;
    
    return false;
}

int main(){
    fast_io;

    int n;  cin >> n;
    int arr[n];     for(int i = 0; i < n; i++)  cin >> arr[i];
    int sum;     cin >> sum;
    vector<int> sub;

    cout << (printSub(arr, sub, n, 0, 0, sum) ? "" : "-1") << endl;
    return 0;
}