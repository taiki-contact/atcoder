#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int n,a,b;
	cin >> n >> a >> b;

	int train = n*a;
	int taxi = b;

	int ans = min(train,taxi);
	cout << ans << endl;

	return 0;
}