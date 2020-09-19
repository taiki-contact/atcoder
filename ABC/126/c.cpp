#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,s,n) for(int i=s;i<n;i++)
// #define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	double n,k;
	cin >> n>>k;

	rep(i,1,n+1){
		double koveri = k*1.0/i;
		int j = 0;
		while(koveri <= 1 ){
			koveri /=2.0;
		}
	}

	return 0;
}