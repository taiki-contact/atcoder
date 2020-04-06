#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string weekday[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

int main(){
	string S;
	cin >> S;
	for(int i = 0; i<7;i++ ){
		if(S == weekday[i]){
			cout << 7-i << endl;
		}
	}
	return 0;
}