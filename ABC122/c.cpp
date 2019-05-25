#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	int N,Q;
	cin >> N >> Q;
	string S;
	cin >> S;

	vector<int> count(N+1,0);

	for (int i = 1; i < N; i++){
		if(S[i-1] == 'A' && S[i] == 'C'){
				count[i] = count[i-1] + 1;
		}
		else
			count[i] = count[i-1];
	}
	count[N] += count[N-1];


	vector<int> ans(Q,0);
	int l,r;

	for (int i = 0; i < Q; i++){
		cin >> l >> r;
		ans[i] = count[r-1] - count[l-1];
	}

	for (int i = 0; i < Q; i++){
		cout << ans[i] << "\n";
	}
	
	// cout << "count :";

	// for (int i = 0; i < N+1; i++)
	// {
	// 	cout << count[i];
	// }

	return 0;
}
