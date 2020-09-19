#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	string s;
	int k;
	cin >> k >> s;
	if(s.length() <= k) cout << s << endl;
	else{
		string sc = s.substr(0,k);
		cout << sc << "...\n";	
	} 

	return 0;
}