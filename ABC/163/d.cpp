#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)
ll mod=1e9+7;

int main(){
	ll n,k;
	cin >> n>>k;
	ll sum = 0;
	for(ll i = k; i<= n+1; i++){
		sum = (sum+ i*n -i*(i-1)+1) %mod; 
	}
	cout << sum << endl;
	

	return 0;
}