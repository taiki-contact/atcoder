#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	ll N;
	std::vector<ll> A(5);
	cin >> N;
	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
	}
	ll m  = A[0];

	for (int i = 1; i < 5; i++)
	{
		m = min(m,A[i]);
	}

	ll ceil = (N % m == 0 ? N/m : N/m + 1);

	cout << ceil + 4 << endl;

	return 0;
}