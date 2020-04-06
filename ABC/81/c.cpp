#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,k;
	cin >> n >> k;

	int a;
	vector<int>num(n+1,0);
	for(int i = 0; i < n; i++){
		cin >> a;
		num[a]++;
		//cout << "num" << a <<":"<< num[a] << endl;
	}

	sort(num.begin(), num.end(),greater<int>());
	int sum = 0;
	// for(int i = 0; i <=n ; i++){
	// 	cout << num[i] << endl;
	// }
	
	for(int i = k; i <= n; i++){
		sum += num[i];
	}
	cout << sum << endl;


	return 0;	
}