#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int x;
	int happy=0;
	cin >> x;
	while(x >= 5){
		if(x>=500){
			x -= 500;
			happy += 1000;
		}
		else{
			x -= 5;
			happy += 5;
		}
	}
	cout << happy << endl;

	return 0;
}