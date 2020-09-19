#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	ll n;
	cin >> n;
	vector<char> name;
	n = n-1;
	if( n== 0){
		cout << 'a' << endl;
		return 0;
	}
	while(n != -1 ){
		name.push_back('a'+ (n%26) );
		// name.push_back('a'-1+(n%26));
		n /= 26;
		n -= 1;
	}
	
	for(int i = name.size()-1; i>=0; i--) cout << name[i];
	cout << endl;

	return 0;
}