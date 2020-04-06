#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	string s;
	cin >> n >> s;
	int count=0;
	for(int i = 2; i< n; i++){
		if(s[i-2] == 'A' && s[i-1] == 'B' && s[i] == 'C' ){
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}