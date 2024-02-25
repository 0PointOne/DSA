#include<bits/stdc++.h>
using namespace std;

bool checkPalindrom(string &str, int idx){
    
    if(idx > (str.length()-1) / 2)  return true;
    return (str[idx] != str[str.length()-1-idx]) ? false : checkPalindrom(str, idx+1);
}
int main(){
    string str;
    cin >> str;

    cout << (checkPalindrom(str, 0) ? "YES"  :  "NO"  ) << endl;
    return 0;
}