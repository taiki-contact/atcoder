#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){

	string s;

	cin >> s;
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		if(s[i] == '1') count += 1;
	}
	cout << count << endl;

	return 0;
}