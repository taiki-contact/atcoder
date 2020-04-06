#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;int x;int y;
	cin >> n>>x>>y;

	int dif;
	std::vector<int> K(n,0);

	for(int i = 1;i <= n-1; i++){
		for(int j = i+1;j <= n; j++){
			K[min(j-i,abs(i-x)+1+abs(y-j))]++;
		}
	}
	for(int i = 1;i<= n-1;i++){
		cout << K[i] << endl;
	}

	return 0;
}