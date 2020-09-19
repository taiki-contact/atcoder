#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
ll mod=1e9+7;

int main(){
	int n;
	cin >> n;
	//string s;
	vector<string> s(n);
	//vector<string> check;
	rep(i,n){
		cin >> s[i];
	}
	sort(s.begin(),s.end());
	// rep(i,n){
	// 	cout << s[i];
	// }

	int count = 1;

	for(int i = 1; i< n; i++){
		if(s[i] != s[i-1]){
			count++;
			//cout << i << endl;
		} 
		else continue;
	}

	cout << count << endl;

	return 0;
}