#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string S,T;
	int A,B;
	string U;

	cin >> S >> T >> A>>B>>U;

	if(U == S){
		cout << A-1 <<" "<< B <<endl;
	}
	else cout << A << " " << B-1 <<endl;

	return 0;
}