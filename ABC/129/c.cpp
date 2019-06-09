#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;
ll mod = 1e9+7;

int main(){

	int N,M;
	cin >> N >> M;

	std::vector<ll> dp(N+1);
	std::vector<int> A(N+1,0);

	int a;
	for (int i = 0; i < M; i++)
	{
		cin >> a;
		A[a] = 1;
	}

	dp[0] = 1;
	if (A[1] == 1) dp[1] = 0;
	else dp[1] = 1;

	//cout << 1 << ":" <<dp[1] << endl;

	for (int i = 2; i <= N; i++)
	{
		if(A[i] == 1)dp[i] = 0;
		else dp[i] = (dp[i-1] + dp[i-2]) % mod;
		//cout << i << ":" <<dp[i] << endl;
	}

	cout << dp[N] << endl;

	return 0;
}