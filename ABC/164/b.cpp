#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,s,n) for(int i=s;i<=n;i++)
ll mod=1e9+7;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	int i = 0;
	while(1){
		if(a <= 0){
			cout << "No\n";
			break;
		}

		if(c <= 0){
			cout << "Yes\n";
			break;
		}

		if(i%2 == 0)c -= b;
		else a -= d;
		i++;
	}

	return 0;
}