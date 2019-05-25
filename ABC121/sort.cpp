#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	int N,M;
	cin >> N >> M;

	vector< vector<int> > A;
	A = vector< vector<int> > (N,vector<int>(2,0));

	for (int i = 0; i < N; i++){
		cin >> A[i][1] >> A[i][0];
	}

	for (int i = 0; i < N; i++)
 	{
 		cout << A[i][0] << " " << A[i][1] << "\n";
 	}


 	 sort(A.begin(),A.end());

 	for (int i = 0; i < N; i++)
 	{
 		cout << A[i][0] << " "<< A[i][1] << "\n";
 	}

 	return 0;
}