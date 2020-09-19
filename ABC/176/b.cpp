#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	string s;

	cin >> s;

	ll sum = 0;
	rep(i,s.length()){
		sum += (s[i]-'0');
	}
	//cout << sum << endl;
	if(sum % 9 == 0) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}