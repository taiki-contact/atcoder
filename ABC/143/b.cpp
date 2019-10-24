#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	std::vector<ll> d(N);
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> d[i];
	}

	for (int i = 0; i < N-1; i++){
		for (int j = i+1; j < N; j++)
		{
			sum += d[i]*d[j];
			//cout << sum << endl;
		}
	}

	cout << sum << endl;

	return 0;
}