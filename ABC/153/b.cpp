#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int h,n,a;
	int sum = 0;

	cin >> h >> n;
	for(int i = 0; i<n; i++){
		cin >> a;
		sum += a;
	}
	if(sum >= h)cout << "Yes\n";
	else cout << "No\n";


	return 0;
}