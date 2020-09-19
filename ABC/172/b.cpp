#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	string s,t;
	cin >> s>>t;
	int count = 0;

	rep(i,s.length()){
		if(s[i] != t[i] ) count++;
	}
	cout << count << endl;

	return 0;
}