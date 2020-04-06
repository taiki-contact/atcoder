#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s;
	cin >> s;
	string ans="No";
	int count = 0;
	for(int i = 1; i < s.length(); i++){
		if(s[i]=='i' & s[i-1]=='h' ){
			count++;
		}
	}
	if(count == s.length()/2 & s.length()%2 ==0){
		ans = "Yes";
	}
	cout << ans << endl;

	return 0;
}