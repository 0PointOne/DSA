#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[], int size, int k){
    static int i = 0;
    if(arr[i++] == k){
        return true;
    }
    if(i == size){
        return false;
    }
    return ispresent(arr, size, k);
}
int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int arr[10000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    if(ispresent(arr,size, k)){
        cout << "Yes " << k << " is present";
    }else{
        cout << "Ohh no! " << k << " is not present";
    }
    return 0;
}