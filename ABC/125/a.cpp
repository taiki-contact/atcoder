#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	int A,B,T;
	cin >> A >> B >> T;

	int ans;
	ans = T/A * B;
	cout << ans << endl;

	return 0;
}