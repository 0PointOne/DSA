#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size, int ans){
    if(size < 0){
        return ans;
    }
    ans += arr[0];
    return sum(arr+1, size-1, ans);
}
int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int arr[10000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << sum(arr,size, 0);
    return 0;
}