#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int box = 0;
	string S;
	cin >> S;
 	
 	int C0 = 0;
 	int C1 = 0;

	for (int i = 0; i < S.size(); i++){
		if(S[i] == '0'){
			C0 += 1;
		}
		else {
			C1 += 1;  
		}
	}

	box = 2 * min(C0,C1);

	cout << box << endl;
	return 0;
}