#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	ll x,k,d;
	cin >> x >> k >> d;

	if(x < 0){
		ll ans1 = (abs(x)%d)*-1;
		ll ans2 =  ans1 + d;
		if(abs(x)/d < k){
			if( (abs(x)/d) %2 == k%2) cout << abs(ans1) << endl;
			else cout << abs(ans2) << endl;
		}
		else{
			cout << abs(x+k*d);
		}
	}
	else{
		ll ans1 = x%d;
		ll ans2 = ans1 -d;
		if(abs(x)/d < k){
			if((x/d)%2 == k%2)cout << abs(ans1) << endl;
			else cout << abs(ans2) << endl;
		}
		else{
			cout << abs(x - k*d) << endl;
		}
	}

	return 0;
}