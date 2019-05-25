#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	int N;
	cin >> N;

	double ans = 0.0;

	for (int i = 0; i < N; i++)
	{
		double x = 0;
		string u;

		cin >> x >> u;
		if(u == "JPY"){
			ans += x;
		}
		if(u == "BTC"){
			ans += x * 380000.0;
		}
	}

	cout << ans << "\n";

	return 0;
}