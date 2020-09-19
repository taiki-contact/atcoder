#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int s,w;
	cin >> s>>w;
	string ans = "safe\n";
	if(w >= s) ans = "unsafe\n";
	cout << ans ;


	return 0;
}