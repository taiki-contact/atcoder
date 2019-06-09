#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b);

int main(){
	int N;
	cin >> N;
	std::vector<ll> A(N+1,0);

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	A[N] = A[N-1];

	std::vector<int> gcd_;

	for (int i = 0; i < N/2; i++){
		gcd_[i] = gcd(A[2*i],A[2*i+1]);
	}

	return 0;
}

int gcd(int a, int b){ 
	int c =1;
	int a_,b_;
	if(a >= b ){
		a_ = a;
		b_ = b;
	}
	else{
		a_ = b;
		b_ = a;
	}
	while(c!=0){
		c=a_%b_;
		a_=b_;
		b_=c;
	}
	return a;
}