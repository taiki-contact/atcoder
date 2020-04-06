#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	int n,k;
	cin >> n;
	std::vector<int> a(n);
	for(int i = 0; i< n;i++ ){
		cin >> a[i]; 
	}
	cin >> k;
	bool state = false;
	for(int bit = 0; bit < (1<<n);bit++){
		int sum = 0;
		for(int i = 0; i < n; i++){
			if((bit>>i)&1){
				sum += a[i];
			}
		}
		if (sum == k) state =true;
	}
	if(state)cout << "Yes"<< endl;
	else cout << "No" << endl;



	return 0;
}