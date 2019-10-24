#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int N;
	string S;
	cin >> N >> S;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		if (S[i] != S[i+1])
			sum += 1;
	}
	cout << sum << endl;

	return 0;
}