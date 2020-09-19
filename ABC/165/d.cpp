#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	ll a,b,n;
	cin >> a>>b>>n;
	if(n >= b){
		cout << (a*(b-1))/b << endl;
	}
	else cout << (a*n)/b<<endl;

	return 0;
}