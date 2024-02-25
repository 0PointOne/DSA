#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(ll n){
	if(n == 0){
		return 0;
	}
	return n + sum(n-1);
}
int main() {
	ll n;	cin >> n;
	cout << sum(n) << endl;

	return 0;
}