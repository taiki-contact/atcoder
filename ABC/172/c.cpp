#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,m,k;
	cin >> n >> m >>k;
	std::vector<ll> a(n+1,0);
	vector<ll>	asum(n+1,0);
	std::vector<ll> b(m+1,0);
	vector<ll> bsum(m+1,0);

	for(int i=1; i<n+1; i++){
		cin >> a[i];
		asum[i] = asum[i-1] + a[i];
	}
	for(int i=1;i<m+1;i++){
		cin >> b[i];
		bsum[i] = bsum[i-1] + b[i];
	}

	// for(int i=0;i<n+1;i++)cout << a[i] <<"."<< asum[i] << endl;
	// for(int i=0;i<m+1;i++)cout << b[i] <<"," << bsum[i] <<endl;

	ll ans = 0;

	for(ll i = 0; i<n+1; i++){
		if(asum[i] > k)continue;
		else{
			int key = k-asum[i];
			auto itrator= upper_bound(bsum.begin(),bsum.end(),key);
			ll bnum = distance(bsum.begin(),itrator) -1;
			//cout << i <<","<<asum[i] << "," << bnum << endl;
			ans = max(ans , i+bnum);
		}
	}
	cout << ans << endl;


	return 0;
}