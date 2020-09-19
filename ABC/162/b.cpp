#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
	int n;
	cin >> n;
	ll sum =0;
	rep(i,n){
		if(i %3 != 0 && i%5!= 0){
			sum += i;
		}
	}
	
	cout << sum << endl;

	return 0;
}