#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;

int main(){
	int N;
	cin >> N;
	vector<int> a(N);
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	
	int s = 1;
	int i = 0;
	bool state = false;
	while(i != N){
		//cout << "s:" << s << ", i:" << i << ", a[i]:" <<a[i] <<endl;
		if(a[i] == s){
			s++;
			state = true;
		}
		i++;
	}
	if(state)cout << N-(s-1) << endl;
	else cout << "-1" << endl;
	
	return 0;
}