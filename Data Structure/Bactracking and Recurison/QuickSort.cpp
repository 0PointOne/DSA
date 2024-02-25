#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partitionIdx(int *arr, int s, int e){

    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pivotIdx = cnt+s;
    swap(arr[s], arr[pivotIdx]);

    int i = s, j = e;
    while(i < pivotIdx && j > pivotIdx){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }
        

        if(i < pivotIdx && j > pivotIdx){
            swap(arr[i++], arr[j--]);
        }

    }
    return pivotIdx;
}

void quickSort(int *arr, int s, int e){
    if(s >= e)      return;

    int p = partitionIdx(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);

}

int main(){
    fast_io;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}