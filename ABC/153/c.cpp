#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,k;
	cin >> n >> k;
	vector<ll>h(n);
	for(int i=0; i<n; i++){
		cin >> h[i];
	}
	sort(h.begin(),h.end());
	ll sum = 0;
	if(k > n){
		cout  << 0 << endl;
	}
	else{
		for(int i = 0; i < n-k; i++){
			sum += h[i];
		}
		cout << sum << endl;
	}

	return 0;
}