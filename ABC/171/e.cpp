#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n;
	cin >> n;
	vector<ll> a(n);
	ll xorsum = 0;
	rep(i,n){
		cin >> a[i];
		xorsum ^= a[i]; 
	}
	rep(i,n){
		cout << (a[i] ^ xorsum) << endl;
	}

	return 0;
}