#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int a,b,c,k;
	cin >> a >> b >> c >> k;
	if(k <= a) cout << k << endl;
	else if(k<= a+b)cout << a << endl;
	else cout << a-(k-a-b) << endl;

	return 0;
}