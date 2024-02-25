#include<bits/stdc++.h>
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void printSubSeq(int arr[], vector<int> &ds, int n, int idx){
    if(idx == n){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << "\n";
        return;
    }
    if(idx == 0){
        cout << "{ }" ;
    }

    printSubSeq(arr, ds, n, idx+1);
    ds.push_back(arr[idx]);
    printSubSeq(arr, ds, n, idx+1);
    ds.pop_back();
}
int main() {
    fast_io;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ds;
    printSubSeq(arr, ds, n, 0);
    return 0;
}