#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	int A,B,C;
	cin >> A >> B >> C;

	string ans;
	if(A == B && B == C){
		ans = "Yes";
	}
	else ans = "No";

	cout << ans << endl;

	return 0;
}