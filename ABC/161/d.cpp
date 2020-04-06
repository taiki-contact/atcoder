#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
	ll k;
	cin >> k;
	ll k_;
	ll k_num =12;
	ll ans;
	if(k <= 12) cout << k << endl;
	else{
		ll i = 13;
		while(k_num !=k){
			k_ = i;
			//cout << "i:" <<k_ << endl;
			bool flag = 0;
			vector<ll>keta;
			while(k_ >= 1){
				keta.push_back( k_ % 10);
				k_ = k_/10;
			}
			// rep(i,(ll)(keta.size()))cout << keta[i] << " ";
			// cout << endl;
			rep(j ,(ll)(keta.size())-1){
				if(abs(keta[j+1]-keta[j] )>1){
					flag = 1;
					//cout << "no\n";
					break;
				}
			}
			if(flag == 0)k_num++;
			//cout << k_num << endl;
			i++;
		}
		cout << i-1<< endl;
	}
}