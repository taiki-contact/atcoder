#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int gcd(int a, int b){ //a>b
	int c =1;
	while(c!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

int main(){
	int A,B,K;
	cin >> A >>B >>K;

	std::vector<int> CD;

	int GCD = gcd(A,B);
	int d = GCD;
	while(d!=0){
		if (GCD%d ==0){
			CD.push_back(d);
		}
		d -= 1; 
	}

	cout << CD[K-1] << endl;
	return 0;
}