#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	string s;
	cin >>s;
	int n = (int)(s.length());

	rep(i,(n-1)/2){
		if(s[i] != s[n-i-1]) {
			cout << "No\n";
			return 0;
		}
	} 
	rep(i,(n-1)/4){
		if(s[i] != s[(n-1)/2 - i -1]){
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";

	return 0;
}