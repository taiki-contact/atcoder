#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 1e18;
const ll mod = 1e9+7;
//const ll LLMAX = LLONG_MAX;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n;
	cin >> n;
	vector<ll> a(n);
	rep(i,n){
		cin >> a[i];
		if(a[i] == 0){
			cout << 0 << endl;
			return 0;
		}
	}
	ll answer =1;

	//a.sort(a.begin(), a.end());
	rep(i,n){
		if(a[i] > INF / answer){
			answer = INF+1;
		}
		else
			answer *= a[i];
	}
	if(answer > INF ) cout << -1 << endl;
	else cout << answer << endl;

	return 0;
}