#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pari<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define read(x) int x; cin >> x
using namespace std;

void swapping(int *arr, int s, int e){
    if(s >= e){
        return;
    }
    swap(arr[s], arr[e]);
    swapping(arr, s+1, e-1);
}
int main() {
    fast_io;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    swapping(arr, 0, n-1);
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}