#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++)  cout << arr[i] << " "; 
    cout << endl;
}
void sort(int *arr, int n){
    for(int i = 0; i < n; i++){
        
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j])      swap(arr[i], arr[j]);
        }
    }
}
void SortUingRecusion(int *arr, int n, int idx){
    if(idx == n)    return;
    for(int i = idx+1; i < n; i++){
        if(arr[i] < arr[idx])   swap(arr[i], arr[idx]);
    }
    SortUingRecusion(arr, n, idx+1);
}

int main(){
    fast_io;
    int n;  cin >> n;
    int arr[n];     for(int i = 0; i < n; i++)  cin >> arr[i];

    /* sort(arr, n);
    print(arr, n); */
    
    SortUingRecusion(arr, n, 0);
    print(arr, n);

    return 0;
}