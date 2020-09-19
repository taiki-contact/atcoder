#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	string s;
	cin >> s;

	int count = 0;
	int ans = 0;
	rep(i,3){
		if(s[i] == 'R'){
			count++;
			ans = max(ans, count);
		}
		else{
			count = 0;
		} 
	}
	cout << ans << endl;

	return 0;
}