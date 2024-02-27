#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int s, int e){

    int pivot = v[s];

    int i = s, j = e;

    while(i < j){
        while(v[i] <= pivot && i <= e - 1)  i++;
        while(v[i] > pivot && j >= s + 1)   j--;

        if(i < j)  swap(v[i], v[j]);
    }

    swap(v[s], v[j]);
    return j;
}

void quickSort(vector<int> &v, int s, int e){
    if(s >= e)  return;

    int p = partition(v, s, e);
    quickSort(v, s, p - 1);
    quickSort(v, p + 1, e);
}

int main(){
    
    int n;  cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)  cin >> v[i];

    quickSort(v, 0, n-1);

    for(int i = 0; i < n; i++)  cout << v[i] << " ";      cout << endl;
    
    return 0;
}