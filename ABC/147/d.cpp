#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

int main(){

	int N;
	cin >> N;
	std::vector<ll> A(N);
	ll ans = 0;
	for(int i= 0; i< N; i++ ){
		cin >> A[i];
	}

	vector<ll>flag(60,0); // bit[i] = Aのi番目のbitの１の個数
	for(int i = 0; i< 60 ; i++){
		//cout << "flag" << i << ":" ;
		for (int j = 0; j < N ; j++){
			flag[i] += (A[j]>>i) & 1; 
			//cout << flag[i] ;
		}
		//cout << endl;
	}
	//cout << endl;
	

	for (int i = 0; i < 60 ; i++){
		ans += ((flag[i] * (N - flag[i])) % MOD ) * ((1LL << i)%MOD) % MOD;
		ans %= MOD;
	}
	cout << ans << endl;

	return 0;
}