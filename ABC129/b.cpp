#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int N;
	cin >> N;
	std::vector<int > W(N);

	for (int i = 0; i < N; i++)
	{
		cin >> W[i]; 
	}

	std::vector<int> sum(N);
	sum[0] = W[0];
	for (int i = 1; i < N; i++)
	{
		sum[i] = sum[i-1] + W[i];
	}
	int s1,s2;
	int ans = 1000;

	for (int i = 0; i < N; i++)
	{
		s1 = sum[i];
		s2 = sum[N-1]-s1;
		ans = min(ans,abs(s1-s2));
	}

	cout << ans << endl;

	return 0;
}