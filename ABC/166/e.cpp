#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 1;i<=n;i++)

int main(){
	int n;
	cin >> n;
	vector<int>a(n+1);
	rep(i,n)cin >> a[i];
	map<ll,ll> dic;

	rep(i,n) dic[i-a[i]]+=1;
	ll ans = 0;
	rep(i,n){
		ans += dic[i+a[i]];
	}
	cout << ans << endl;

	return 0;
}
