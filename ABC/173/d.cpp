#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n;
	cin >> n;
	std::vector<ll> a(n);
	rep(i,n)cin >> a[i];

	sort(a.begin(), a.end(),greater<ll>());
	int times = 1;
	int head = 0;
	ll ans = 0;
	rep(i,n-1){
		if(times == 1){
			ans += a[head];
			head++;
			times = 0;
		}
		else{
			ans += a[head];
			times++;
		}
		//cout << ans << endl;
	}
	cout << ans << endl;

	return 0;
}