#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++)      cout << arr[i] << " ";
    cout << endl;
}

void insertionSortUsingRecursion(int *arr, int n, int idx){
    if(idx == n){
        return;
    }
    int key = arr[idx];
    int j = idx - 1;
    while(key < arr[j] && j >= 0){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    insertionSortUsingRecursion(arr, n, idx+1);
}

void insertionSort(int *arr, int n){

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(key < arr[j] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    fast_io;

    int n;          cin >> n;
    int arr[n];     for(int i = 0; i < n; i++)      cin >> arr[i];

    /* insertionSort(arr, n);
    print(arr, n); */

    insertionSortUsingRecursion(arr, n, 1);
    print(arr, n);

    return 0;
}