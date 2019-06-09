#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int P,Q,R;
	cin >> P >> Q >> R;

	int a,b,c;
	a = P + Q;
	b = Q + R;
	c = R + P;

	cout << min(a,min(b,c)) << endl;

	return 0;
}