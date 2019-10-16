#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;
	if (N%2 == 0)
		cout << 1/2.0 << endl;
	else cout << (N+1)/2.0/N << endl;

	return 0;
}