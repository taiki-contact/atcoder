#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int l;
	cin >> l;
	
	double len = l/3.0;
	double ans = len * len * len;
	printf("%.12lf\n",ans);

	return 0;
}