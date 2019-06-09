#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	string b,ans;

	cin >> b;

	if(b == "A")
		ans = 'T';
	else if (b == "T")
		ans = 'A';
	else if(b == "C")
		ans = 'G';
	else if (b == "G")
		ans = 'C';

	cout << ans << "\n";

	return 0;
}
