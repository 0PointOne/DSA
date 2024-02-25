#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}
void bubbleSort(int *arr, int n){

     for(int i = 1; i < n; i++){

        for(int j = 0; j < n - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }

    }
}

void bubbleSortUsingRecursion(int *arr, int n){
    if(n == 0 || n == 1){
        return;
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSortUsingRecursion(arr, n-1);

}

int main(){
    fast_io;
    int n;
    cin >> n;
    int arr[n];     
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 

    // bubbleSort(arr, n);
    // print(arr, n);
    
    bubbleSortUsingRecursion(arr, n);
    print(arr, n);
    return 0;
}