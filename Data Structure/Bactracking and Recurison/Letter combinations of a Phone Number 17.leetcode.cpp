#include<bits/stdc++.h>
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(string digits, string output, int idx, vector<string> &ans, string mapping[]){

    if(idx >= digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[idx] - '0';
    string value = mapping[number];

    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(digits, output, idx+1, ans, mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits){

    vector<string> ans;
    if(digits.length() == 0){
        return ans;
    }
    string output;
    int idx = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, idx, ans, mapping);
    
    return ans;
}

int main(){
    fast_io;
    string digits;
    cin >> digits;

    vector<string> ans = letterCombinations(digits);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    return 0;
}