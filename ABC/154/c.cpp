#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e9+1 

int main(){
	int N;
	cin >> N;
	vector<bool>array(INF,0);
	ll a;
	string ans = "YES";
	for(int i = 0; i< N;i++){
		cin >> a;
		if(array[a] == 1){
			ans = "NO";
			break;
		}else{
			array[a] =1;
		}
	}
	cout << ans << endl;

	return 0;
}