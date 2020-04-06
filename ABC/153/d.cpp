#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll h;
	cin >> h;
	ll r_n = 1;
	while(h != 1){
		h /= 2;
		r_n *= 2;
	}
	cout << r_n*2-1 << endl;


	return 0;
}