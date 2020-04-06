#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;


int main(){
	ll a, b;
	cin >> a >> b;
	ll tmp;

	if(a<b){
		tmp = a;
		a = b;
		b = tmp;
	}
	ll A = a;
	ll B = b;
	ll r = A % B;
	while(r!= 0){
		A = B;
		B = r;
		r = A % B;
	}

	ll ans = a*b/B; 
	//cout << "B" << B << endl;

	cout << ans << endl;

	return 0;
}