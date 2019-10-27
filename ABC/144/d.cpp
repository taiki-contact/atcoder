#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;



int main(){
	ld pi = acos(-1);
	ld a,b,x,a2b,a3,ab2;
	cin >> a >> b >> x;
	a2b = a * a * b;
	ab2 = a * b * b;
	a3 = a*a*a;
	ld ans ;
	if (x >= a2b/2)
	{
		ans = atan((2*(a2b - x)/a3)) * 180 /pi;
	}
	else ans = 90 - (atan((2*x)/ab2) * 180 /pi );

	cout << fixed << setprecision(10) << ans << endl;

	return 0;
}