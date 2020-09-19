#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	string s,t;
	cin >> s >> t;
	rep(i,s.size()){
		if(s[i] != t[i]){
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";


	return 0;
}