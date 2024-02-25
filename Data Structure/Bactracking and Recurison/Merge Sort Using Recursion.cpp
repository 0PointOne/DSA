#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++)      cout << arr[i] << " " ;
    cout << endl;
}

void merge(int *arr, int s, int mid, int e){

    int temp[e+1];

    int l1 = s;
    int l2 = mid + 1;

    int k = 0;
    while(l1 <= mid && l2 <= e){
        if(arr[l1] <= arr[l2]){
            temp[k++] = arr[l1++];
        }
        else if(arr[l1] >= arr[l2]){
            temp[k++] = arr[l2++];
        }
    }

    while(l1 <= mid){    
        temp[k++] = arr[l1++];
    }
    while(l2 <= e){
        temp[k++] = arr[l2++];
    }
    for(int i = s; i <= e; i++){
        arr[i] = temp[i - s];
        cout << "s: " << s << " e: " << e << " and for idx: " << i << ": " << arr[i] << endl;
    }
    
}
void mergeSort(int *arr, int s, int e){

    if(s >= e)      return;

    int mid = s + (e-s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, mid, e);
}

int main(){
    fast_io;
    int n;          cin >> n;
    int arr[n];     for(int i = 0; i < n; i++)      cin >> arr[i];

    mergeSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}