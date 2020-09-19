#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	ll n,q;
	cin >> n;
	vector<ll>a(n);
	vector<ll>num(1e5,0);
	ll sum = 0;

	rep(i,n){
		cin >> a[i];
		sum += a[i];
		num[a[i]] += 1;
	}

	cin >> q;
	std::vector<ll> b(q);
	std::vector<ll> c(q);
	rep(i,q){
		cin >> b[i] >> c[i];
	}
	rep(i,q){
		sum = sum + num[b[i]]*(c[i]-b[i]);
		num[c[i]] += num[b[i]];
		num[b[i]] = 0;
		cout << sum << endl;
	}

	return 0;
}