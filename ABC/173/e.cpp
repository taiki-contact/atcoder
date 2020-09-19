#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,k;
	cin >> n >> k;
	vector<ll> a(n);
	rep(i,n)cin >> a[i];
	sort(a.begin(), a.end(),greater<ll>());

	ll ans = 1;


	cout << ans << endl;

	return 0;
}