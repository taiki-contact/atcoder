#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll mod = 1000000007;

ll comb(ll n,ll r){
	if(r*2 >n) r = n-r;
	ll dividend = 1;
	ll divisor = 1;
	for (ll i = 1; i <= r ; i++){
		dividend *= (n-i+1);
		dividend %= mod;
		divisor *= i;
		divisor %= mod;
	}
	return dividend%divisor;
}

int main(int argc, char const *argv[])
{
	int x ,y ;
	cin >> x >> y;
	

	ll a = 2*y-x; 
	ll b = 2*x-y;
	if (a>=0 && a%3 == 0 && b >= 0 && b%3 == 0)
	{
		ll alpha = a/3;
		ll beta = b/3;

		cout << comb(alpha+beta,alpha)<< endl;
	}
	else cout << 0 << endl; 

	return 0;
}