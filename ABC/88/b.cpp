#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;
	std::vector<int> a(N);
	int alice = 0;
	int bob = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	for (int i = 0; i < N; i++)
	{
		if (i%2 == 0)
			alice += a[i];
		else bob += a[i];
	}

	cout << alice - bob << endl;

	return 0;
}