#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int coins[] = {1,5,10,50,100,500};

int main(){
	int c[6];
	int a;
	for(int i = 0; i < 6 ; i++){
		cin >> c[i];
		//cout << c[i];
	}
	cin >> a;

	int count=0;
	for (int i = 5; i >=0 ; i--){
		while(a/coins[i] > 0 && c[i] >0){
			a -= coins[i];
			c[i]--;
			count++; 
		}
	}

	cout << count << endl;
	return 0;
}