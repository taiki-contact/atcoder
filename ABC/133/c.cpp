#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int L,R;
	cin >> L >> R;
	int l = L % 2019;
	if (R-L >= 2019 - l){
		cout << 0 << endl;
	}
	else{
		int ans = 2020;
		for (int i = l; i <= l+(R-L)-1; i++){
			for (int j = l+1 ; j <= l+(R-L); j++){
				ans = min(ans,(i*j)%2019);
			}
		}
		cout << ans << endl;
	}

	return 0;
}