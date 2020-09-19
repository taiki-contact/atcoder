#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,m;
	cin >> n>>m;
	vector<int>h(n+1);
	for(int i = 1; i<=n;i++) cin>>h[i];
	vector<bool>check(n+1,1);

	rep(i,m){
		int a,b;
		cin >> a >> b;
		if(h[a] > h[b])check[b] = 0;
		else if(h[a] < h[b]) check[a] = 0;
		else{
			check[a] = 0;
			check[b] = 0;
		}
	}


	int count=0;
	for(int i =1;i<=n;i++){
		//cout << check[i] << ",";
		if(check[i] == 1)count++;
	}
	cout << count << endl;

	return 0;
}