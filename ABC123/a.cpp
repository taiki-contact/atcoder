#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> a(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	
	string ans = "Yay!";

	for (int i = 0; i < 4; i++){
		for (int j = i+1; j < 5; j++)
		{
			if(a[j]-a[i] > k){
				ans = ":(";
				break;
			}
		}
	}

	cout << ans << endl;

	return 0;
}