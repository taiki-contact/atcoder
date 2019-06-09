#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){

	int A,B,C,X;
	cin >> A >> B >> C >> X;

	int count = 0;

	for (int a = 0; a <= A ; a++){
		for (int b = 0; b <= B ; b++){
			for (int c = 0; c <= C ; c++)
			{
				if(X == a*500 + b*100 + c*50)
					count += 1;
			}
		}
	}

	cout << count << endl;


	return 0;
}