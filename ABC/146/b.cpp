#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int N;
	string S;
	cin >> N >> S;
	for(int i = 0; i < (int)S.length(); i++){
		if(S[i] + N > 'Z' )
			S[i] = S[i] + N - 26;
		else S[i] = S[i] + N;
	}
	cout << S << endl;
	return 0;
}