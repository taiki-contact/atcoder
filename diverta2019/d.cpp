#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){

	ll N;
	cin >> N;
	double n = N;
	double root_n = sqrt(n);

	std::vector<int > divisors;
	for (int i = 1; i <= root_n +1 ; i++)
	{
		if (N%i == 0)
		{
			divisors.push_back(i);
			if (i != N/i )
			{
				divisors.push_back(N/i);
			}
		}
	}

	int size = divisors.size();
	ll ans = 0;

	for (int i = 0; i < size; i++)
	{
		int m = N / divisors[i] -1;
		if (N % m != 0 )
		{
			ans += m;
		}
	}

	cout << ans << endl;

	return 0;
}