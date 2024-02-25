#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void reverse(string &str, int s){

    if(s >= str.size() / 2) return;

    swap(str[s], str[str.size() - 1 - s]);

    reverse(str, s+1);
}

int main() {
    fast_io;

    string str;
    cin >> str;
    reverse(str, 0);
    cout << str << endl;

    return 0;
}