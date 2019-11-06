#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(int argc, char const *argv[])
{
	int N;
	cin >> N ;
	std::vector<int> T(N+1);
	ll sum = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> T[i];
		sum += T[i];
	}
	int M;
	cin >> M;
	std::vector<int> P(M+1) ;
	std::vector<int> X(M+1) ;

	for (int i = 1; i <= M; i++)
	{
		cin >> P[i] >> X[i];
	}

//	cout << sum << ":" << endl;

	for (int i = 1; i <= M; i++)
	{	
		cout << sum -T[P[i]]  + X[i] << endl;
	}

	return 0;
}