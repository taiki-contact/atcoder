#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;
	std::vector<int> d(N);
	for (int i = 0; i < N; i++)
	{
		cin >> d[i];
	}
	sort(d.begin(),d.end());

	int m = N/2;
	cout << d[m]-d[m-1] << endl;

	return 0;
}