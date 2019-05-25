#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//timeoutしたプログラム

int main(){

	int box = 0;
	string S;
	cin >> S;
 

	int itr1 = (int)S.find("01");
	int	itr2;

	do {
		while(itr1 != -1){
	 		S.erase(itr1,2);
	 		itr1 = (int)S.find("01",itr1);
	 		box += 2;
	 	}
	 	itr2 = (int)S.find("10");
	 	while(itr2 != -1){
	 		S.erase(itr2,2);
	 		itr2 = (int)S.find("01",itr2);
	 		box += 2;
	 	}
	 	itr1 = (int)S.find("01");
	 	itr2 = (int)S.find("10");
	}while(itr1 != -1 or itr2 != -1);

	cout << box << endl;
	return 0;
}