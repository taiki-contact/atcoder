#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	int N,M;
	cin >> N >> M;
	int ans=0;

	std::vector<int> X(M);
	for (int i = 0; i < M; i++){
		cin >> X[i];
	}

	if (N < M){
		sort(X.begin(),X.end());
		std::vector<int> dist;

		for (int i = 0; i < M-1; i++){
			dist.push_back(X[i+1]-X[i]);
		}
		int sum=0;
		sort(dist.begin(),dist.end(),greater<int>());
		for (int i = 0; i < N-1; i++){
			sum += dist[i];
		}

		ans = X[M-1]-X[0]-sum;
	}
	
	cout << ans << endl;

	return 0;
}