#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void findSubSeq(int arr[], vector<int> &subSeq, int n, int idx, int s, int sum){
    if(idx == n){
        if(s == sum){
            for(auto it : subSeq){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    subSeq.push_back(arr[idx]);
    s += arr[idx];
    findSubSeq(arr, subSeq, n, idx+1, s, sum);

    s -= arr[idx];
    subSeq.pop_back();
    findSubSeq(arr, subSeq, n, idx+1, s, sum);
    
}
int main() {
    fast_io;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum;     cin >> sum;
    vector<int> subSeq;
    findSubSeq(arr, subSeq, n, 0, 0, sum);
    return 0;
}