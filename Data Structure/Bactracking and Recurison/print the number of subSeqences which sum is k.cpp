#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


// Time Complixity: 2^n;
int NumSubSeq(int arr[], int n, int idx, int sum, int s){

    if(s > sum)         return 0;
    if(idx == n){
        if(sum == s)    return 1;
        else            return 0;
    }

    s += arr[idx];
    int k = NumSubSeq(arr, n, idx+1, sum, s);
    
    s -= arr[idx];
    int l = NumSubSeq(arr, n, idx+1, sum, s);
    
    return k + l;
}

int main(){
    fast_io;

    int n;          cin >> n;
    int arr[n];     for(int i = 0; i < n; i++)  cin >> arr[i];
    int sum;          cin >> sum;

    cout << NumSubSeq(arr, n, 0, sum, 0) << endl;
    return 0;
}