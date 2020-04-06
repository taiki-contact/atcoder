#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n,m;
	cin >> n >> m;
	vector<int>a(n);
	int ans = 0;
	int sum = 0;
	rep(i,n){
		cin >> a[i];
		sum += a[i];
	}
	rep(i,n){
		if(a[i] >= sum/(4.0*m)){
			ans++;
		}
	}

	if(ans >= m)cout << "Yes\n";
	else cout << "No\n";



	return 0;
}