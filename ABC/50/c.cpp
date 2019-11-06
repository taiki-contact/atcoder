#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll mod = 1000000007;
ll N_max = 100000;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	std::vector<int> A(N,0);
	for (int i = 0; i <N; i++)
	{
		int value;
		cin >> value;
		A[value] += 1;
	}
	// for (int i = 0; i < N; ++i)
	// {
	// 	cout << A[i] << ":";
	// }
	// cout << endl;

	ll ans = 1;

	if (N%2 == 0){ 
		//cout << "even" << endl;
		for (int i = 0; i <N; i++)
		{
			if ( i%2 == 0 && A[i] == 0){
				ans = (ans * 2) % mod ;
			}
			else if(i%2 == 1 && A[i] == 2){
				continue;
			}
			else{
				cout << 0 << endl;
				return 0;
			}
		}
	}
	else{
		//cout << "odd" << endl;
		for (int i = 0; i < N; i++)
		{
			if (i == 0 && A[i] == 1)continue;
			else if(i % 2 == 0 && A[i] == 2){
				ans = (ans *2) % mod;
				//cout << "ans = " << ans << endl;
			}
			else if(i % 2 == 1 && A[i] == 0)continue;
			else{
				cout << 0 << endl;
				return 0;
			}
		}
	}
	cout << ans << endl;
	return 0;
}