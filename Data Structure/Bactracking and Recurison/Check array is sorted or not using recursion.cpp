#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPoint = isSorted(arr+1, size-1);
        return remainingPoint;
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    if(isSorted(arr, size)){
        cout << "Array is sorted" << endl;
    }
    else
        cout << "Ohh no! Array is not sorted" << endl;
    return 0;
}