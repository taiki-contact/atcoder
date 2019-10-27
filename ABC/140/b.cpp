#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	std::vector<int> A(N+1);
	std::vector<int> B(N+1);
	std::vector<int> C(N);

	cin >> N ;
	for (int i = 1; i <= N; i++){
		cin >> A[i];
	}
	for (int i = 1; i <= N; i++){
		cin >> B[i];	
	}
	for (int i = 1; i <= N-1; i++){
		cin >> C[i];	
	}

	int stsfy = 0;
	int meal = 0;

	for (int i = 1; i <= N; i++)
	{
		stsfy += B[A[i]];
		//cout << stsfy << endl;
		if (A[i] == meal+1)
		{
			stsfy += C[meal];
			//cout << "**"<<stsfy << "**" << endl;
		}
		meal = A[i];
	}

	cout << stsfy << endl;

	return 0;
}