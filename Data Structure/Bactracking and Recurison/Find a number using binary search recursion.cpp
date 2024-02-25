#include<bits/stdc++.h>
using namespace std;

bool binary_recursion(int arr[], int key, int st, int end){

    int mid = st + (end - st) / 2;
    if(st > end)        return false;
    
    else if(arr[mid] == key)        return true;
    
    else if(arr[mid] > key)     return binary_recursion(arr, key, st, mid-1);
    else                       return binary_recursion(arr, key, mid+1, end);
    
}
int main(){
    int size;
    cin >> size;
    int arr[100000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    sort(arr, arr+size);

   
    int key; cin >> key;
    if(binary_recursion(arr, key, 0, size-1 ))  cout << key << " is present";
    else cout << key << " is not present";
    return 0;
}