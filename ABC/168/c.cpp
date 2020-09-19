#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	double a,b,h,m;
	cin >> a >> b>>h>>m;
	 static const double pi = 3.141592653589793;

	double Atheta = h*30+m/2.0;
	double Btheta = m*6;
	double theta = abs(Atheta - Btheta);

	double costheta = cos(theta/180*pi);

	double ans = sqrt(a*a+b*b-2*a*b*costheta);
	printf("%.11lf\n", ans);

	return 0;
}