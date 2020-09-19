#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,k;
	cin >> n>>k;
	std::vector<int> p(n);
	rep(i,n) cin >> p[i];

	sort(p.begin(), p.end());
	int ans = 0;
	rep(i,k) ans += p[i];
	cout << ans << endl;

	return 0;
}