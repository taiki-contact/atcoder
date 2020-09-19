#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	ll n,d;
	cin >> n >> d;
	ll count = 0;
	rep(i,n){
		ll p,q;
		cin >> p >> q;
		if(d >= sqrt(p*p+q*q)){
			count++;
		}
	}
	cout << count << endl;

	return 0;
}