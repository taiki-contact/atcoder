#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	string S;
	cin >> S;
	string ans = "Good";

	for (int i = 0; i < 3; i++)
	{
		/* code */
		if (S[i] == S[i+1])
		{
			ans = "Bad";
			break;
		}
	}
	cout << ans << endl;

	return 0;
}