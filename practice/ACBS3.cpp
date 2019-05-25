#include <iostream>

int main(){
	int a;
	std::cin >> a;

	int place[3];
	place[0] = (a/1)%2;
	place[1] = (a/10)%2;
	place[2] = a/100;

	int output = 0;

	for (int i = 0; i < 3; i++)
	{
		if(place[i]==1)
			output = output + 1; 
	}

	std::cout << output << "\n";
	return 0;
}