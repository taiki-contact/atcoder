#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){

	int A,B,Q;
	cin >> A >> B >> Q;

	std::vector<ll> s(A+2);
	s[0] = -1e15;
	s[A+1] = 1e15;
	for (int i = 1; i < A+1; i++){
		cin >> s[i];
	}

	std::vector<ll> t(B+2);
	t[0] = -1e15;
	t[B+1] = 1e15;
	for (int i = 1; i < B+1; i++){
		cin >> t[i];
	}
	
	std::vector<ll> x(Q);
	for (int i = 0; i < Q; i++){
		cin >> x[i];
	}

	for (int i = 0; i < Q; i++){
		int spos = bins(s,x[i]);
		int tpos = bins(t,x[i]);
		ll res = 1e15;

		for (int sserch = spos; sserch < spos+2; sserch++){
			for (int tserch = tpos; tserch < tpos+2 ; tserch++){
				ll d1 = abs(s[sserch]-x[i])+abs(t[tserch]-s[sserch]);
				ll d2 = abs(t[tserch]-x[i])+abs(s[sserch]-t[tserch]);
				res = min(res,min(d1,d2));
			}
		}
	cout << res << endl;

	}
	return 0;
}

	