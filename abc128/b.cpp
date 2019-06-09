#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct restaurant
{
	string name;
	int score;
	int num;
};

bool cmpscore(const restaurant &a, const restaurant &b){
	return a.score > b.score;
}

int main(){

	int N;
	cin >> N;

	std::vector<restaurant> R(N);
	string S;
	int P;

	for (int i = 0; i < N; i++)
	{
		cin >> S >> P;

		R[i].name = S;
		R[i].score = P;
		R[i].num = i+1;
	}
	
	sort(R.begin(),R.end(),cmpscore);	

	for (int i = 1; i < N; i++)
	{
		restaurant v;
		v = R[i];
		int j = i-1;
		while (R[j].name > v.name && j>=0)
		{
			R[j+1] = R[j];
			j--;
		}
		R[j+1] = v;
	}

	for (int i = 0; i < N; i++)
	{
		cout << R[i].num << endl;
	}

	return 0;
}