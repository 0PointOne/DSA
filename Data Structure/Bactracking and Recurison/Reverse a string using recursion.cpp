#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void reverse(string &str, int s, int e){

    if(s > e)       return;

    swap(str[s], str[e]);
    s++;    e--;
    reverse(str, s, e);
}

int main(){
    fast_io;
    string str;     cin >> str;

    reverse(str, 0, str.length()-1);
    cout << str << endl;
    return 0;
}