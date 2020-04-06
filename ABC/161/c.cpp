#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	ll n;
	ll k;
	cin >> n>>k;

	if(n>= k) n %= k;
	while(n>k/2.0){
		n = min(k-n,n);
	}
	cout << n << endl;

	return 0;
}