#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int A,B;
	char op;
	cin >> A >> op >> B;

	if (op == '+') cout << A+B << endl;
	else cout << A-B << endl;

	return 0;
}