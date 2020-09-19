#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,n)cin >> a[i];

	ll sum = 0;

	for(int i=1; i<n; i++){
		if(a[i-1] <= a[i]) continue;
		else {
			sum += a[i-1] - a[i];
			a[i] = a[i-1];
		}
		//cout << sum << endl;
	}
	cout << sum << endl;

	return 0;
}