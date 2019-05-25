#include <iostream>

int main(){
	int a,b;
	std::cin >> a >> b;

	int test = (a*b)%2;
	if(test == 0)
		std::cout << "Even\n";
	else
		std::cout << "Odd\n";

	return 0;
}