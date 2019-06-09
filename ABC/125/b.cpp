#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	int N;

	cin >> N;

	std::vector<int> V(N+1);
	std::vector<int> C(N+1);
	for (int i = 0; i < N; i++){
	 	cin >> V[i];
	} 

	for (int i = 0; i < N; i++){
		cin >> C[i];
	}

	 std::vector<int> dif(N);

	for (int i = 0; i < N; i++){
	 	dif[i] = V[i]-C[i];
	}

	int ans=0;

	for (int i = 0; i < N; i++){
	 	if (dif[i] > 0){
	 		ans += dif[i]; 
	 	}
	}

	cout << ans << endl;

	return 0;
}