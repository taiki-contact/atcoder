#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int n,k;
	cin >> n >> k;
	int m = n-k+1;

	std::vector<ll> conb(m+1);
	ll mod = 1e9 + 7 ;

	if(n == 1){
		cout << 1 << endl;
	}
	else{
		conb[1] = m;

		for (int i = 2; i <= m; i++)
		{
			conb[i] = conb[i-1]*(m-i+1)/i % mod;
		}
		
		// for (int i = 1; i <= m ; i++)
		// {
		// 	cout << conb[i] << ":" ;
		// }
		// cout << endl;

		std::vector<ll> beki(k+1);
		beki[k] = 1;
		for (int i = 1; i < k; i++)
		{	
			beki[i] = i;
			for (int j = 2; j <= k-i; j++)
			{
				beki[i] = beki[i]*beki[i] % mod;
			}
		}
		// for (int i = 1; i <= k; ++i)
		// {
		// 	cout << beki[i] << ";";
		// }
		// cout << endl;

		for (int i = 1; i <= k; i++)
		{
			cout << conb[i]*beki[i] %mod << endl;
		}
	}
	
	return 0;
}