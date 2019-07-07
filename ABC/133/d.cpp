#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;
	int m = 2*N;
	std::vector<ll> A(m+1,0);
	ll sum = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		sum += A[i];
	}

	std::vector<ll> x(N+1,0);
	ll asum = 0;
	for (int i = 2; i < N ; i=i+2)
	{
		asum += A[i];
	}
	x[1] = sum/2 - asum;

	for (int i = 2; i <= N; i++)
	{
		x[i] = A[i-1]- x[i-1];
	}

	for (int i = 1; i <= N; i++)
	{
		cout << 2*x[i] << endl;
	}



	return 0;
}