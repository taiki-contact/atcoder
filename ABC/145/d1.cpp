#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll mod = 1000000007;

ll comb(ll n, ll r) {
  vector<vector<ll>> v(n + 1,vector<ll>(n+1, 0));
  for (ll i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (ll j = 1; j < v.size(); j++) {
    for (ll k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k])/ mod;
    }
  }
  return v[n][r];
}



int main(int argc, char const *argv[])
{
	ll x ,y ;
	cin >> x >> y;

	ll a = 2*y-x; 
	ll b = 2*x-y;
	if (a>=0 && a%3 == 0 && b >= 0 && b%3 == 0)
	{
		ll alpha = a/3;
		ll beta = b/3;

		ll sum = alpha + beta;
		cout << comb(sum,min(alpha,beta)) << endl;
	}

	else cout << 0 << endl; 



	return 0;
}