#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	cin >> n;
	int num;
	string ans = "No\n";
	rep(i,3){
		num = n%10;
		n /= 10;
		if(num == 7){
			ans = "Yes\n";
			break;
		}
	}
	cout << ans ;

	return 0;
}