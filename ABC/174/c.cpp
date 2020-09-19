#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int k;
	cin >> k;
	if(k == 1){
		cout << 1 << endl;
		return 0;
	}
	
	vector<bool>r_flag(k+1,false);
	
	int r = 7%k;

	if(r == 0){
		cout << 1 << endl;
		return 0;
	}
	else{
		r_flag[r] = true;
	}

	int count = 1;
	while(1){
		r = (r*10+7) % k;
		count++;

		if(r == 0){
			cout << count << endl;
			return 0;
		}
		if(r_flag[r] == true){
			//cout << count << endl;
			cout << -1 << endl;
			return 0;
		}
		
		r_flag[r] = true;

	}

	return 0;
}