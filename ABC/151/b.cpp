#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	double N,K,M,A;
	double sum = 0;
	cin >> N >> K >> M;
	for(double i = 1; i <= N-1 ; i++){
		cin >> A;
		sum += A ;
	}
	double ans;
	ans = M*N - sum;
	if(ans > K)cout << -1 <<endl;
	else if(ans <= 0) cout << 0 << endl;
	else cout << ans << endl;

	return 0;
}
