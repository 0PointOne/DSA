#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    int maxi = arr[0];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(sum, maxi);
        
        (sum > 0) ? sum = sum : sum = 0;
    }
    cout << maxi << endl;
    return 0;
}