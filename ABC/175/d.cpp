#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
ll INF = 9e-18;  

ll calc(vector<ll> &v, int start, int num){
	if(v.size() > start+num){
		return v[start] - v[v.size()] +  v[num + start - v.size()];
	}
	else return v[start+num] - v[start];
}

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> p(n+1);
	vector<ll> c(n+1);

	for(int i=1; i<=n; i++) cin >> p[i];
	for(int i=1; i<=n; i++) cin >> c[i];

	//vector<ll> v_sub(n+1);
	vector<ll> v(n+1);

	int prev;
	for(int i=1; i<=n; i++){
		if(i==1){
			v[i]= c[i]; 
			prev = 1;
		}
		else{
			v[i] = v[i-1] + c[p[prev]];
			prev = p[prev];
		}
		cout << v[i] << ",";
	}
	cout << endl;


	int roop = k/n;
	int remain = k%n;
	ll ans = -INF;
	for(int start = 1; start <= n; start++){
		for(int num = 1; num <= remain; num ++){
			ll ans__ = calc(v, start, num);
			cout << ans__ << ",";
			ans = max(ans, ans__);
		}
	}
	cout << endl;

	if(v[n] > 0){
		ans = roop*v[n]+ans;
	}

	cout << ans << endl;

	return 0;
}