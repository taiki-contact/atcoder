#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int n;
	cin >> n;
	std::vector<int> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	int count=0;


	for (int i = 1; i < n-1; i++)
	{
		int minp = min(min(p[i-1],p[i]),p[i+1]);
		int maxp = max(max(p[i-1],p[i]),p[i+1]);
		if (minp < p[i] && p[i] < maxp )
		{
			count += 1;
		}
	}
	cout << count << endl;

	return 0;
}