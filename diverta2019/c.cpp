#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int N;
	cin >> N;

	string S;
	int a=0;
	int b=0;
	int ab = 0;
	int count = 0;
	int size;

	for (int i = 0; i < N; i++)
	{
		cin >> S;
		size = S.size();
		if(S[0] == 'B')
			b += 1;
		if(S[size-1] == 'A')
			a += 1;
		if (S[0] == 'B' && S[size-1] == 'A'){
			count += 1;
		}
	
		for (int j = 0; j < size-1 ; j++)
		 {
		 	if(S[j] == 'A' &&  S[j+1] == 'B')
		 		ab += 1;
		 } 
	}

	if (a == b && a == count )
	{
		a = a-1;
	}

	cout << ab + min(a,b) << endl;

	return 0;
}