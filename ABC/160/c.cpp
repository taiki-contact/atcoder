#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int k;int n;
	cin >> k>>n;
	vector<int > a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int mdif = -1;
	for(int i=0;i<n;i++){
		if(i ==n-1)mdif= max(mdif,a[0]+k-a[n-1]);
		else mdif = max(mdif,a[i+1]-a[i]);
	}
	cout << k-mdif << endl;

	return 0;
}