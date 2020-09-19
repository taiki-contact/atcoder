#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
	int n;
	cin >>n;
	vector<ll>a(n+1,0);
	vector<ll>odd(n/2+2,0);
	vector<ll>even(n/2+1,0);
	rep(i,n){
		cin >> a[i];
		if(i%2 == 0)even[i/2] = even[i/2 -1] + a[i];
		else odd[i/2+1] = odd[i/2] + a[i];    
	} 
	ll ans = -1e13;

	if(n%2 == 0){
		for(int k = 0; k<=n/2; k++){
			ans = max(ans,odd[k]+(even[n/2] - even[k]));
		}
	}
	else{
		for(int k =0; k<= n/2; k++){
			ans = max(ans,odd[k]+(even[n/2] - even[k]));
		}
		for(int j = 1; j<= n/2+1; j++){
			ans = max(ans,odd[n/2+1] - odd[j] + odd[j-1]);
		}
		for(int i = 1; i<n/2;i++ ){
			ans = max(ans, even[i] + odd[n/2+1] - odd[i+1]);
		}
	}
	cout << ans << endl;
	
	
	return 0;
}