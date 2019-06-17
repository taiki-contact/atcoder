#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;

	std::vector<int> mochi(101,0);
	int d;

	for (int i = 1; i <= N; i++)
	{
		cin >> d;
		if (mochi[d] == 0) mochi[d] = 1;
	}

	int sum =0 ;

	for (int i = 1; i <= 100 ; ++i)
	{
		sum += mochi[i];
	}

	cout << sum << endl; 

	return  0;

}