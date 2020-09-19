#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int k,a,b;
	cin >> k>>a>>b;


	if(b-a >= (k-a%k)  || a%k == 0){
		cout << "OK\n";
	}else cout << "NG\n";


	return 0;
}