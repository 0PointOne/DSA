#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(const vector<int> &vec){
    for(auto num : vec){
        cout << num << " ";
    }
    cout << endl;
}

void merge(vector<int> &vec, int s, int e){

    int mid = s + (e-s) / 2;

    int len1 = mid + 1 - s;
    int len2 = e - mid;

    vector<int> vec1(len1);
    vector<int> vec2(len2);

    int k = s;
    for(int i = 0; i < len1; i++){
        vec1[i] = vec[k++];
    }
    k = mid+1;
    for(int i = 0; i < len2; i++){
        vec2[i] = vec[k++];
    }

    k = s;
    int idx1 = 0, idx2 = 0;
    while(idx1 < len1 && idx2 < len2){
        if(vec1[idx1] <= vec2[idx2]){
            vec[k++] = vec1[idx1++];
        }
        else{
            vec[k++] = vec2[idx2++];
        }
    }

    while(idx1 < len1){
        vec[k++] = vec1[idx1++];
    }
    while(idx2 < len2){
        vec[k++] = vec2[idx2++];
    }
    vec1.clear();
    vec2.clear();
}

void mergeSort(vector<int> &vec, int s, int e){
    if(s == e){
        return;
    }
    int mid = s + (e-s) / 2;
    mergeSort(vec, s , mid);
    mergeSort(vec, mid+1, e);

    merge(vec, s, e);
}

int main(){
    fast_io;
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    mergeSort(vec, 0, n-1);
    print(vec);
    return 0;
}
