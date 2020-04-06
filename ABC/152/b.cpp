#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int a,b;
	cin >> a >> b;
	string ans;
	if(a >= b){
		for(int i = 0; i < a; i++){
			ans.push_back('0'+b);
		}
	}
	else{
		for(int i = 0; i < b; i++){
			ans.push_back('0'+a);
		}
	}
	cout << ans << endl;

	return 0;
}
