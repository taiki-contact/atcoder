#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;


int main()
{	

	string date;
	cin >> date;
	//cout << date << "\n";
	date.erase(date.begin()+4);
	//cout << date << "\n";
	date.erase(date.begin()+6);
	//cout << date << "\n";


	int d = atoi(date.c_str());;
	//cout << d << "\n";

	if(d <= 20190430){
		cout << "Heisei\n";
	}
	else {
		cout << "TBD\n";
	}

	return 0;
}