#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // ⁡⁢⁣⁣Brute Force Approach without Kadane's Algorithm⁡
    int sum = arr[0];
    for(int i = 0; i < n; i++){
        int subSum = 0;
        for(int j = i; j < n; j++){
            int subSum = 0;
            for(int k = i; k <= j; k++){
                subSum += arr[k];
            }
            if(subSum > sum){
                sum = subSum;
            }
        }
    }
    cout << sum << endl;
   
    // ⁡⁢⁣⁣Time Complexity: O(n^3)⁡;
    return 0;
}