#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	string s;
	cin >> s;
	int size = (int)s.size();
	int half;
	if(size%2 != 0) half = size/2+1;
	else half = size/2;
	int count = 0;

	for (int i = 0; i < half; ++i){
		if(s[i] == s[size-i-1])continue;
		else count ++;
	}
	cout << count << endl;

	return 0;
}