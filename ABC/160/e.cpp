#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int x,y,a,b,c;
	cin >> x>>y>>a>>b>>c;
	vector<int>p(a);
	vector<int>q(b);
	vector<int>r(c);
	rep(i,a)cin >> p[i];
	rep(i,b)cin >> q[i];
	rep(i,c)cin >> r[i];

	sort(p.begin(), p.end(),greater<int>());
	sort(q.begin(), q.end(),greater<int>());

	rep(i,x)r.push_back(p[i]);
	rep(i,y)r.push_back(q[i]);

	sort(r.begin(),r.end(),greater<int>());
	ll sum =0;
	rep(i,x+y) sum+= r[i];

	cout << sum << endl;


	return 0;
}