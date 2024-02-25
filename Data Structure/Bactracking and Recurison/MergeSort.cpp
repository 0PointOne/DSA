#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int s, int e){

    int mid = s + (e-s) / 2;

    int len1 = mid + 1 - s;
    int len2 = e - mid;

    int *arr1  = new int[len1];
    int *arr2  = new int[len2];

    int k = s;
    for(int i = 0; i < len1; i++){
        arr1[i] = arr[k++];
    }
    k = mid+1;
    for(int i = 0; i < len2; i++){
        arr2[i] = arr[k++];
    }

    k = s;
    int idx1 = 0, idx2 = 0;
    while(idx1 < len1 && idx2 < len2){
        if(arr1[idx1] <= arr2[idx2]){
            arr[k++] = arr1[idx1++];
        }
        else{
            arr[k++] = arr2[idx2++];
        }
    }

    while(idx1 < len1){
        arr[k++] = arr1[idx1++];
    }
    while(idx2 < len2){
        arr[k++] = arr2[idx2++];
    }


}

void mergeSort(int *arr, int s, int e){
    if(s == e){
        return;
    }
    int mid = s + (e-s) / 2;
    mergeSort(arr, s , mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){
    fast_io;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}
