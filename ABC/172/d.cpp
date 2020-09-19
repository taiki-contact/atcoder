#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}


int main(){
	ll n;
	cin >> n;
	ll sum = 0;

	for(ll i = 1; i<=n; i++){
		const auto &pf = prime_factorize(i);
		ll res =1;
		for(auto p:pf) res*= p.second+1;
		sum += res*i;
	}

	cout << sum << endl;

	return 0;
}