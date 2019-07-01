#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){

	int N;
	cin >> N;
	int ts = 0;
	int xs = 0;
	int ys = 0;
	int te,xe,ye;
	string ans = "Yes";
	
	for (int i = 0; i < N; i++)
	{
		cin >> te >> xe >> ye;
		int dx = abs(xe-xs);
		int dy = abs(ye-ys);
		int dt = te -ts;
		if ((dt-dx-dy)%2 == 0 && dt >= dx+dy)
		{
			ts = te;
			xs = xe;
			ys = ye;
		}
		else{
			ans = "No";
			break;
		}
	}

	cout << ans << endl;

	return 0;	
}