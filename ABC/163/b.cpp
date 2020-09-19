#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n,m;
	cin >> n>>m;
	vector<int>a(n);
	int sum = 0;
	rep(i,m){
		cin >> a[i];
		sum+= a[i];
	}
	if(n-sum >=0)cout << n-sum << endl;
	else cout << -1 << endl;

	return 0;
}