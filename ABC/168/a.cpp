#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n;
	cin >> n;
	if(n%10 == 2 || n%10 == 4 || n%10 == 5||n%10 == 7||n%10==9)cout << "hon\n";
	else if(n%10 == 3)cout << "bon\n";
	else cout << "pon\n";

	return 0;
}