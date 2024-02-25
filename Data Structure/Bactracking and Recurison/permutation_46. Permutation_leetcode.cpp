#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mod 1e9 + 7
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int idx){
    if(idx >= nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j = idx; j < nums.size(); j++){
        swap(nums[idx], nums[j]);
        solve(nums, ans, idx+1);
        swap(nums[idx], nums[j]);
    }
}

vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    int idx = 0;
    solve(nums, ans, idx);
    return ans;
}

int main(){
    fast_io;

    int n;
    cin >> n;
    vector<int>nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> ans = permute(nums);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}