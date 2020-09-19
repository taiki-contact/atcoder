#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)


int main(){
	int n;
	cin >> n;

	if(n%1000 == 0) cout << 0 << endl;
	else cout << 1000-(n%1000) << endl;

	return 0;
}