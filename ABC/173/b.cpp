#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n;
	cin >> n;
	vector<string>s(n);

	int ac = 0;
	int wa = 0;
	int tle = 0;
	int re = 0;

	
	rep(i,n){
		cin >> s[i];
		if(s[i] == "AC")ac++;
		else if(s[i] == "WA") wa++;
		else if(s[i] == "TLE") tle++;
		else if(s[i] == "RE") re++;
	}

	cout << "AC x " << ac << endl;
	cout << "WA x " << wa << endl;
	cout << "TLE x " << tle << endl;
	cout << "RE x " << re << endl;

	return 0;
}