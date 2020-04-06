#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int h,a;
	cin >> h >> a;
	if(h%a == 0)cout << h/a << endl;
	else cout << h/a+1 << endl;
	return 0;
}