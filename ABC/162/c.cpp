#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)

int gcd(int a, int b) {
  if(a < b) return gcd(b, a);
  int r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main(){
	int k;
	cin >> k;
	int sum =0;
	rep(a,k){
		rep(b,k){
			rep(c,k){
				sum += gcd(a,gcd(b,c));
			}
		}
	}
	
	cout << sum << endl;

	return 0;
}