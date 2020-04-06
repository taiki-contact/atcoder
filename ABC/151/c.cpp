#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int N,M;
	cin >> N >> M;
	int p;
	string S;
	int sum = 0;
	vector<bool> ac(N,0);
	vector<int> wa(N,0);
	int w_ans = 0;

	for(int i = 0; i< M; i++){
		cin >> p >> S;
		if(S == "AC" && ac[p-1] == 0){
			ac[ p-1 ] = 1;
			sum++;
		}
		else if(S == "WA" && ac[p-1] == 0){
			wa[p-1] += 1;
		}
	}
	for(int i = 0; i < N; i++){
		if(ac[i] == 1)
			w_ans += wa[i];
	}

	cout << sum << " " << w_ans << endl;

	return 0;
}