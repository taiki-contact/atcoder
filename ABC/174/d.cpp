#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	string s;
	cin >> n >> s;

	int rcount = 0;
	int ans = 0;
	rep(i,n){
		if(s[i] == 'R')rcount++;
	}
	//cout << rcount << endl;
	for(int i= rcount; i <n; i++){
		if(s[i] == 'R')ans++;
	}
	cout << ans << endl;


	return 0;
}