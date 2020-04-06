#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int N;
	cin >> N;
	string s;
	cin >> s;

	std::vector<int> S(N+1);
	for (int i = 0; i < N; i++){
		S[i] = s[i]-'0';
	}

	int count =0;

	for (int a = 0; a <= 9; a++){
		for (int b = 0; b <= 9; b++){
			for (int c = 0; c <= 9; c++){
				int i,j,k;
				i = 0;
				//cout << a << b << c << endl;
				while(S[i] != a){
					if(i >= N)break;
					i++;
					//cout << "i"<< i << endl;
				}
				j = i+1;
				while(S[j] != b){
					if(j >= N)break;
					j++;
					//cout << "j" << j << endl;
				}
				k = j+1;
				while(S[k] != c){
					if(k >= N)break;
					k++;
					//cout << "k" << k << endl;
				}
				if(k < N){
					count++;
					//cout << a << b << c <<endl;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}