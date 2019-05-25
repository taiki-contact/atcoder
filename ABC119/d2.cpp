#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef long long ll;

int bins(vector<ll> v,ll x){
	int lower = 0;
	int upper = v.size();
	while(abs(lower-upper)>1){
		int mid = (lower+upper)/2;
		if(v[mid]<=x) lower = mid;
		else upper = mid;
	}
	return lower;
}

int main(){

	int A,B,Q;
	cin >> A >> B >> Q;

	std::vector<ll> s(A);
	for (int i = 0; i < A; i++){
		cin >> s[i];
	}
	s.push_back(1e15);
	s.insert(s.begin(),-1e15);

	std::vector<ll> t(B);
	for (int i = 0; i < B; i++){
		cin >> t[i];
	}
	t.push_back(1e15);
	t.insert(t.begin(),-1e15);

	std::vector<ll> x(Q);
	for (int i = 0; i < Q; i++){
		cin >> x[i];
	}


	std::vector<ll> a;
	std::vector<ll> b;
	std::vector<ll> d(Q,1e11);

	for (int q = 0; q < Q; q++){
	
		for (int i = 0; i < 2; i++){
			if(i == 0){
				a = s;
				b = t;
			}
			else{
				a = t;
				b = s;
			}
			for (int j = 0; j < 2; j++){
				ll apos = bins(a,x[q])+j;
				ll ax = a[apos];	

				for (int k = 0; k < 2; k++){
					ll bpos = bins(b,ax)+k;
					ll bx = b[bpos];
					d[q] = min(d[q],abs(x[q]-ax)+abs(ax-bx));
				}
			}
		}

		cout << d[q] << endl;
	}

	return 0;
}

	