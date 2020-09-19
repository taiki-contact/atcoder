#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	ll x;
	cin >> x;
	ll money = 100;
	ll count = 0;

	while(x > money){
		money *= 1.01;
		count++;
	}
	cout << count << endl;


	return 0;
}