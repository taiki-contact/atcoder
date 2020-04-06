#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,m;
	cin >> n >> m;
	std::vector<int> s(m);
	std::vector<int> c(m);
	for(int i =0;i<m;i++){
		cin >> s[i] >> c[i];
	}

	for(int num = 0; num<1000; num++){
		int flag = 1;
		string numstr = to_string(num); 

		for(int i = 0; i < m; i++){
			// printf("numstr[%d]:%x\n",s[i]-1,numstr[s[i]-1]);
			// printf("c[%d]:%x\n",i,'0'+c[i]);
			if( numstr[s[i]-1]-'0' != c[i]) flag = 0;
		}

		if(flag == 1 && numstr.length() == n){
			cout << num << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}