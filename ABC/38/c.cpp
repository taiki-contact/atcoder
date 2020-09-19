#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> delta(n);

	rep(i,n){
		cin >> a[i];
		if(i > 0)delta[i] = a[i]-a[i-1];
	}

	int i = 0;
	int start=0;
	ll sum = 0;
	int end;
	while(i!= n){
		if( delta[i] <= 0){
			end = i-1;
			ll k = (ll)end - start+1;
			sum += k*(k-1)/2;
			start = i;
		}
		else if(i == n-1){
			end = i;
			ll k = (ll)end - start+1;
			sum += k*(k-1)/2;
		}
		i++;
	}

	cout << sum+n << endl;

	return 0;
}