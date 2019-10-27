#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;


int main(){

	int N;
	cin >> N;
	std::vector<int> B(N-1);
	std::vector<ll> A(N);

	for (int i = 0; i < N-1; i++)
	{
		cin >> B[i];
	}
	A[0] = B[0];
	A[N-1] = B[N-2];

	for (int i = 1; i < N-1; i++)
	{
		A[i] = min(B[i-1],B[i]);
	}
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += A[i];
	}
	cout << sum << endl;

	return 0;
}