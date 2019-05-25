#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	int N,M,C;

	cin >> N >> M >> C;
	std::vector<int> B(M);
	int A;
	int sum;
	int count = 0;

	for (int i = 0; i < M; i++){
		cin >> B[i];
	}

	for (int i = 0; i < N; i++){
		sum = 0;
		for (int j = 0; j < M; j++){
			cin >> A;
			sum+= A*B[j];
		}

		if(sum > -C)
			count += 1;
	}

	cout << count << "\n";
	
	return 0;
}