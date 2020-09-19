#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int A,B,C,k;
	cin >> A >> B >> C >> k;
	bool flag = false;

	vector<int>a_bi(k+1);
	vector<int> b_bi(k+1);
	vector<int> c_bi(k+1);
	a_bi[0] = A;
	b_bi[0] = B;
	c_bi[0] = C;

	for(int i = 1; i<= k; i++){
		a_bi[i] = a_bi[i-1]*2;
		b_bi[i] = b_bi[i-1]*2;
		c_bi[i] = c_bi[i-1]*2;
	}

	for(int a=0; a<=k; a++){
		for(int b = 0; b <= k-a; b++){
			for(int c = 0; c <= k-b-a;c++){
				A = a_bi[a];
				B = b_bi[b];
				C = c_bi[c];
				//cout << a << "," << b << "," << c << ":";
				//cout << A << "," << B << "," << C << endl;
				if(C > B && B > A){
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;

	return 0;
}