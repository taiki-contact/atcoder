#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	long N,M;
	cin >> N >> M;

	vector< vector<long> > A;
	A = vector< vector<long> > (N,vector<long>(2,0));

	for (int i = 0; i < N; i++){
		cin >> A[i][0] >> A[i][1];
	}

 	sort(A.begin(),A.end());
 	long ans = 0;

	for (int i = 0; i < N; i++){
		if(A[i][1] < M ){
			ans += A[i][1] * A[i][0]; 
			M = M - A[i][1];
		}
		else{
			ans += M * A[i][0];
			break;
		}
	}

	cout << ans <<"\n";

	return 0;
}