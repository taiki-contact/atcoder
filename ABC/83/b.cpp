#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	int N,A, B ;
	cin >> N >> A >> B;
	int sum;
	int n1,n2,n3,n4,n5,n_sum = 0;

	for (int i = 1; i <= N; i++)
	{
		 n1 = i / 10000;
		 n2 = i / 1000 % 10;
		 n3 = i / 100 % 10;
		 n4 = i / 10 % 10;
		 n5 = i % 10;
		 n_sum = n1 + n2 + n3 + n4 + n5;

		 if(A<= n_sum & n_sum <= B)
		 	sum += i;
	}

	cout << sum << endl;
	return 0;
}