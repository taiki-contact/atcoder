#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int A,B;
	cin >> A >> B;
	if (A-2*B <= 0)
	{
		cout << 0 << endl;
	}
	else cout << A-2*B << endl;

	return 0;
}