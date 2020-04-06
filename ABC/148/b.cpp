#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int N;
	string S,T;
	string R;

	cin >> N >> S >> T;

	for(int i = 0; i< N ; i++){
		R += S[i];
		R += T[i];
	}
	cout << R << endl;

	return 0;
}