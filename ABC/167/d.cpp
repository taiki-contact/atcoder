#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(ll i = 0;i<n;i++)

int main(){
	ll n,k;
	cin >> n>>k;
	vector<ll>a(n+1);
	for(ll i=1; i<= n;i++)cin >> a[i];

	vector<bool> check(n+1,0);
	vector<ll> visit_time(n+1,0);
	

	ll start = 1;
	ll move_time = 0; 
	while(check[start] != 1){
		check[start] = 1;
		visit_time[start] = move_time; 
		start = a[start];
		move_time++;
		cout<< "move_time: " << move_time 
			<< ", visit: " << start << endl;
	}

	ll roop = move_time - visit_time[start];
	cout << "roop:" << roop;
	ll before_roop = visit_time[start];
	cout << ", before_roop: " << before_roop << endl;
	ll spot;

	if(k <= move_time){
		spot = 1;
		rep(i,k){
			spot = a[spot];
		}
		cout << spot << endl;
		return 0;
	}
	else{
		spot = start;
		ll amari = (k - before_roop) % roop;
		rep(i,amari){
			spot = a[spot];
		}
		cout << spot << endl;
		return 0;
	}
}