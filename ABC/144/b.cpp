#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;

	if (
		(N % 1 == 0 && N /1 <= 9) ||
		(N % 2 == 0 && N /2 <= 9) ||
		(N % 3 == 0 && N /3 <= 9) ||
		(N % 4 == 0 && N /4 <= 9) ||
		(N % 5 == 0 && N /5 <= 9) ||
		(N % 6 == 0 && N /6 <= 9) ||
		(N % 7 == 0 && N /7 <= 9) ||
		(N % 8 == 0 && N /8 <= 9) ||
		(N % 9 == 0 && N /9 <= 9) 

		)
	{
	 	cout << "Yes" << endl;
	} 
	else cout << "No" << endl;

	return 0;
}