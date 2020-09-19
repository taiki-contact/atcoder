#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,m;
	cin >> n >> m;
	//vector<bool> d(n/2+1);
	//d[0] = 1;
	vector<bool> num(n+1,0);
	num[0] = 1;

	int a = 1;
	int b;
	int count = 1;
	int i = 1;

	while(count != m+1){
		b = count + a;
		num[a] = 1;
		num[b] = 1;
		cout << a << " " << b << endl;
		count++;
		while(num[i] == 1)i++;
		a = i;
	}	


	return 0;
}