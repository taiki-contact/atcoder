#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
	int n,k;
	cin >> n >> k;
	vector<ll>a(n);
	for(int i=0; i<n;i++) cin >> a[i];

	vector<ll> b(n);
	b[0] = a[0];
	for(int i = 1; i<n; i++){
		if(i < k-1){
			b[i] = 	b[i-1]*a[i];	
		}
		else b[i] = b[i-1]*a[i]/a[i-k];
	}

	for(int i = k; i< n; i++){
		if(b[i] <= b[i-1]){
			cout << "No" << endl;
		}
		else cout << "Yes" << endl;
	}


	return 0;
}