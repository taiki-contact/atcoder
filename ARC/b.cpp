#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int A,B,M;
	cin >> A >> B>>M;
	vector<int> a(A);
	vector<int> b(B);
	vector< vector<int> > discount(M,vector<int>(3));
	int a_min= 1e6;
	int b_min= 1e6;

	for(int i = 0; i< A; i++){
		cin >> a[i];
		a_min = min(a_min,a[i]); 
	}
	for(int i = 0; i<B;i++){
		cin >> b[i];
		b_min = min(b_min,b[i]);
	}
	for(int i=0;i<M;i++){
		for(int j=0; j<3;j++){
			cin >> discount[i][j];
		}
	}
	ll ans = a_min+b_min;
	for(int i=0;i<M;i++){
		ll val = a[discount[i][0]-1]+b[discount[i][1]-1]-discount[i][2];
		ans = min(ans,val);
	}
	cout << ans << endl;



	return 0;
}