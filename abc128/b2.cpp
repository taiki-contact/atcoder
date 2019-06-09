#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef pair<int, pair<string,int>> res;

int main(){

	int N;
	cin >> N;

	std::vector<res> R(N);
	string S;
	int P;

	for (int i = 0; i < N; i++)
	{
		cin >> S >> P;
		R[i].first = P;
		R[i].second.first = S;
		R[i].second.second = i+1;
	}

	sort(R.begin(),R.end());

	for (int i = 0; i < N; i++)
	{
		cout << R[i].second.second<< endl;
	}


	return 0;
}