#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

ll GCD(ll a, ll b){
	if(b == 0) return a;
	else return GCD(b,a%b);
}

int main(){

	ll A,B;
	cin >> A >> B ;

	ll gcd = GCD(A,B);
	//cout << gcd << endl;
	ll count =1;

	for (ll i =2; i*i <= gcd; i++){
		if (gcd % i != 0) continue;

		while(gcd % i == 0){
			gcd/= i; 
		}
		count++;
	}
	
	if (gcd != 1)
	{
		count++;
	}

	cout << count << endl;
	return 0;
}