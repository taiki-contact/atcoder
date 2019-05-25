#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

long f(long n){
	long r;
	if(n%4 == 0)
		r = n;
	else if(n%4 == 1)
		r = 1;
	else if(n%4 == 2)
		r = n + 1;
	else if(n%4 == 3)
		r = 0;

	return r;
}

int main(){
	
	long A,B;
	cin >> A >> B;

	long a,b,ans;
	a = f(A-1);
	b = f(B);
	ans = a^b;

	cout << ans << "\n";


	return 0;
}

