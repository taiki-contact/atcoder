#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,k;
	cin >> n >> k;

	vector<ll> a(n+1);
	vector<ll> sum(n+1,0);
	for(int i=1; i<=n; i++){
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}

	ll ans = 0;

	for(int i =1;i <= n-k+1; i++){
		ans += sum[i+k-1]-sum[i-1];
	}

	cout << ans << endl;
	return 0;
}