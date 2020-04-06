#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll N;
	cin >> N;
	ll div = 5;
	ll ans = 0;

	if(N % 2 == 1)cout << 0 << endl;
	else{
		ll p = N / 10; 
		ans += N / 10;
		//cout << ans << endl;
			while( p /div != 0){
				//cout << "div:" << div << ", p/div2:" << p/div << ", ans:" << ans << endl; 
				ans += p/div ;
				div *= 5;
			}
		cout << ans << endl;
	}

	return 0;
}