#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int N;
	string S;

	cin >> N >> S;
	int ans = 1;

	if (N % 2 == 0){
		for (int i = 0; i < N/2; i++)
		{
			if (S[i] == S[N/2+i])
				continue;
			else {
				ans = 0;
				break;
			}
		}

		if (ans == 0)
			cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	
	return 0;
}