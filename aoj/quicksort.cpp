#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int partirion(vector<int> A,int p,int r){
	int x = A[r];
	int i = p-1;
	for (int j = p; j < r; j++){
		if (A[j] <= x){
			i = i+1;
			int swap = A[i];
			A[i] = A[j];
			A[j] = swap;
		}
	}
	int swap = A[i];
	A[i] = A[r];
	A[r] = swap;
	return i+1;
}

int main(){
	int 