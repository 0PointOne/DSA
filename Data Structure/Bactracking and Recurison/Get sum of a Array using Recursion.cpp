#include<bits/stdc++.h>
using namespace std;
long long getSum(int *arr, int size, int i, long long sum){
    if(i == size){
        return sum;
    }
    sum = sum + arr[i];
    return getSum(arr, size, i+1, sum);
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i]; 
    }
    cout << "Sum is: " << getSum(arr, size, 1, arr[0]);
    return 0;
}