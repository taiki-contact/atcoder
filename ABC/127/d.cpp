#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;

int main(){

	int N,M,A,B,C;
	cin >> N >> M;
	std::vector<ll> num(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		num[i] = A;
	}
	sort(num.begin(),num.end());

	for (int i = 0; i < M; i++)
	{
		cin >> B >> C;
		
	}






	return 0;
}