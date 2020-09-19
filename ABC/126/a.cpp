#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,k;
	string s;
	cin >> n>>k>>s;

	if(s[k-1] == 'A')s[k-1] ='a'; 
	if(s[k-1] == 'B')s[k-1] ='b';
	if(s[k-1] == 'C')s[k-1] ='c';

	cout << s << endl;

	return 0;
}