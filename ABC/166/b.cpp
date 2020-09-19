#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,k;
	cin >> n >> k;
	vector<bool> sunuke(n+1,0);
	sunuke[0] = 1;

	rep(i,k){
		int d;
		cin >> d;
		rep(j,d){
			int a;
			cin >> a;
			sunuke[a] = 1;
		}
	}
	int count = 0;
	rep(i,n+1){
		if(sunuke[i] == 0)count++; 
	}
	cout << count << endl;

	return 0;
}