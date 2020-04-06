#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)

int combo(int num){
	if(num < 2)return 0;
	else return num*(num-1)/2;
}

int main(){
	int n;
	cin >> n;
	vector<int>num(n,0);
	vector<int>a(n,0);
	rep(i,n){
		cin >>a[i];
		num[a[i]]+=1;
	}
	// rep(i,n)cout << a[i]<<",";
	// cout << endl;
	// rep(i,n+1)cout << num[i] <<",";
	// cout << endl; 

	rep(k,n){
		ll ans = 0;
		num[a[k]] -= 1;
		rep(i,n){
			ans += combo(num[i]);
			//printf("%d,%lld\n",i,ans);
		}
		cout << ans << endl;
		num[a[k]] +=1;
	}



	return 0;
}