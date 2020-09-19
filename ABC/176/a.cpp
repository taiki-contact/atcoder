#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n,x,t;
	cin >> n >> x >> t;

	if(n % x == 0) cout << n/x * t ;
	else cout <<  (n/x+1)*t;

	return 0;
}