#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    getline(cin, str);
    int maxi = 0, count = 0;
    int key = str[0];
    
    for(int i = 1; i < str.length(); i++){
        if(key == str[i]){
            count++;
        }
        else if(key != str[i]){
            key = str[i];
            maxi = max(count, maxi);
            count = 0;
        }
        if(i == str.length()-1){
            maxi = max(count, maxi);
        }
    }
    maxi++;
    cout << maxi << endl;

    return 0;
}