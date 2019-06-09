#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){

	int N;
	cin >> N;
	int status = 0;
	std::vector<ll> A(N);
	int count =0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	while(status == 0){
		for (int i = 0; i < N; i++)
		{
			if(A[i] % 2 == 1){
				status = 1;
				break;
			}
			A[i] = A[i]/2;
		}
		count += 1;
	}
	cout << count-1 << endl;
	return 0;
}