#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long  n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    arr[n-1] = INT_MAX;
    sort(arr, arr+(n-1));
    long long k = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] != k){
            cout << k << endl;
            return 0;
        }
        else{
            k++;
        }
    }
    return 0;
}