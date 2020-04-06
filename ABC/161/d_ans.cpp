#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=1;i<=n;i++)

int main(){
	int k;
	cin >> k;
	queue<ll> que;

	int count = 0;
	ll n;
	rep(i,9)que.push(i);
	while(count != k){
		n = que.front();
		if(n%10 != 0) que.push(n*10+(n%10)-1);
		que.push(n*10+(n%10));
		if(n%10 != 9) que.push(n*10+(n%10)+1);
		que.pop();
		count++;
		//cout << "count:"<< count<<" ,n:"<<n<<endl;
	}
	cout << n << endl;

	return 0;
}