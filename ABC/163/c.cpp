#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> b(n+1,0);
	for(int i = 2; i<=n; i++){
		cin >> a[i];
		b[a[i]]++; 
	}

	for(int i = 1; i<= n; i++){
		cout << b[i] << endl;
	}

	return 0;
}