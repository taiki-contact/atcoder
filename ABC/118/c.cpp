#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


//最大公約数があればそれが答え。互いに素であれば、１

int gcd(int a, int b);

int main(){

	int num_i;
	std::cin >> num_i;

	std::vector<int> input(num_i);
	for (int i = 0; i < num_i; i++){
		std::cin >> input[i]; 
	}

	std::sort(input.begin(),input.end()); //昇順ソート		

	int ans=input[0];
	for (int i = 1; i < num_i ; i++)
	{
		ans = gcd(input[i],ans);
	}

	std::cout << ans << "\n";
	return 0;
}


int gcd(int a, int b){ //a>b
	int c =1;
	while(c!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}