#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int K,S;
	cin >> K >> S;

	ll ans = 0;

	for (int x = 0; x <= K; x++){
		for (int y = 0; y <= K ; y++){
			int z = S-x-y;
			if (z >= 0 && z <= K)
			{
				ans++;
				//cout << x << ":" << y << ":" << z << endl;
			}

		}
	}	
	cout << ans << endl;

	return 0;
}