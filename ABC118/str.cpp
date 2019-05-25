#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	for (int i = 0; i < 10; ++i)
	{
		str += (char)(i+'0');	
		cout << i+'0'<<',';
		cout << (char)(i+ '0') << ',';
	}
	cout << "\n";
	cout << str << "\n";
	return 0;
}