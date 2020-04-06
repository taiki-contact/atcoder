#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<int> p(n);
	int p_min = 1e6;
	int ans = 0;
	for(int i = 0; i<n; i++){
		cin >> p[i];
	}
	for(int i = 0; i<n; i++){
		p_min = min(p_min,p[i]);
		if(p[i] <= p_min){
			ans++;
		}
		//printf("i:%d,p_min:%d,p[i];%d\n",i,p_min,p[i]);
	}
	cout << ans << endl;

	return 0;
}
