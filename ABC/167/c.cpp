#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,m,x;
	cin >> n>>m >> x;
	vector<int> c(n);
	vector<vector<int>> a(n,vector<int>(m));
	rep(i,n){
		cin >> c[i];
		rep(j,m)cin >> a[i][j];
	}
	int cost = 1e9;

	for(int bit = 0; bit < (1 << n); bit++){
		int subcost = 0;
		vector<int> study(m,0);
		for(int flag = 0; flag < n; flag++){
			if(bit & (1<<flag) ){
				subcost += c[flag];
				for(int j = 0; j <m; j++){
					study[j] += a[flag][j];
				}
			}
		}
		bool hantei = true;
		rep(j,m){
			if(study[j] < x)hantei = false;
		}
		if(hantei){
			cost = min(subcost,cost);
		}
	}
	if(cost == 1e9)cout << -1 << endl;
	else cout << cost << endl;


	return 0;
}