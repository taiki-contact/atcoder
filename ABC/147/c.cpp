#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int N;
int A[20];
int x[20][20];
int y[20][20];
int ans = 0;

int counter(int bit){
	int count = 0;
	while(bit !=0 ){
		count += (bit%2);
		bit /= 2;
	} 
	return count;
}

int main(){
	
	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> A[i];
		for (int j = 1; j <= A[i] ; j++){
			cin >> x[i][j] >> y[i][j];
		}
	}

	for (int bit = 0; bit < (1<<N); bit++){
		//cout << bitset<15>(bit) << endl;
		bool ok = true;
		for (int i = 1; i <=N ; i++){
			if(!(bit & (1 << (i-1)))) continue;
			for (int j = 1; j <= A[i] ; j++){
				if( (y[i][j]==1 && (bit & (1<<(x[i][j]-1))) == 0) | 
					(y[i][j]==0 && (bit & (1<<(x[i][j]-1))) != 0) )
					ok = false;
			}
		}
		if(ok){ 
			ans = max(ans, counter(bit));
			//cout << "true!!" << endl;
		}
	}
	cout << ans << endl;
	
	return 0;
}