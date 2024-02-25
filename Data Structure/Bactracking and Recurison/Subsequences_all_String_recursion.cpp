#include<bits/stdc++.h>
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(string str, string output, int idx, vector<string> &ans){

    if(idx >= str.length()){
        ans.push_back(output);
        return;
    }

    solve(str, output, idx+1, ans);
    char element = str[idx];
    output.push_back(element);
    solve(str, output, idx+1, ans);
}

int main(){
    fast_io;
    
    string str;
    cin >> str;

    vector<string> ans;
    string output = "";
    int index = 0;

    solve(str, output, index, ans);
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;

    return 0;
}