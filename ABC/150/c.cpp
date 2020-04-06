#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int p,q;
	int a=0;
	int b=0;

	vector<int> n_(n+1);
	n_[0] = 1;
	for(int i = 1;i<=n;i++){
		n_[i] = n_[i-1]*i; 
	}
	for(int i = 0; i<n-1; i++){
		cin >> p;
		a += (p-1) * n_[n-i-1];
	}
	for(int i = 0; i<n-1; i++){
		cin >> q;
		b += (q-1) * n_[n-i-1];
	}
	cout << a << ";"<<b << endl;
	cout << abs(a-b) << endl;

	return 0;
}