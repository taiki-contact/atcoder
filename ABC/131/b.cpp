#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N,L;
	cin >> N >> L;
	int sum = (L-1)*N + N*(N+1)/2;
	//cout << sum << endl;

	int ans;

	if (L<= -N)
	{
		ans = sum - (L+N-1);
	}
	else if(L >= 1){
		ans = sum -L;
	}
	else{
		ans = sum;
	}

	cout << ans << endl;

	return 0;
}