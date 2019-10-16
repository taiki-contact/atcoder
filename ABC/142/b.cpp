#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N,K;
	cin >> N >> K;
	std::vector<int> h(N);
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> h[i];
		if (h[i] >= K)
		{
			count ++;
		}
	}
	cout << count << endl;

	return 0;
}