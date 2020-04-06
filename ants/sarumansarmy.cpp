#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int N,R;
	cin >> N >> R;
	vector<int> x(N);
	int count = 0;
	int start = 0;
	int mark = N-1 ;

	for(int i = 0; i < N; i++ ){
		cin >> x[i];
	}

	for(int i = 0; i < N; i++){
		if(count < 1){
			if(x[i]-x[0] <= R && x[i+1]-x[0] > R){
				mark = i;
				count++;
			}
		}else{
			if(x[i]-x[mark] > R){
				mark = i;
				count++;
			}
		}
	}
	cout << count << endl;

	return 0;
}