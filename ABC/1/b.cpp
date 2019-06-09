#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	cin >> m;

	if(m < 0.1*1000)
		cout << "00" << "\n";
	else if(m <= 5.0*1000){
		int vv = m / 100;
		if(vv < 10)
			cout << "0" << vv << "\n";
		else 
			cout << vv << "\n";
	}
	else if(m <= 30*1000){
		int vv = m/1000 + 50;
		cout << vv << "\n";
	}
	else if(m <= 70*1000){
		int vv = (m/1000 - 30) / 5 + 80;
		cout << vv << "\n";
	}
	else if(70*1000 < m){
		cout << "89" << "\n";
	}


	return 0;
}