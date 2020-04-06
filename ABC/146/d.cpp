#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int N;
	cin >> N ;

	vector<int>a(N);
	vector<int>b(N);
	int A;
	int B;
	for(int i = 1; i <= N-1 ; i++){
		cin >> A >> B;
		a[i] = A-1;
		b[i] = B-1; 
	}
	vector< vector<bool> > node(N,vector<bool>(N,0)); //頂点i(<= N)に色j(<= N-1)が繋がっているか
	vector<int> c(N);
	int k = 0;
	for(int i = 0; i < N-1; i++){
		cout << "iterator :" << i <<endl;

		for(int color = 1; color < N; color++){

			cout << "color : " << color << endl;
			cout << a[i] <<","<< node[a[i]][color] << ","
			<< b[i] << "," << node[b[i]][color] << endl;

			if(node[a[i]][color] == 0 && node[b[i]][color] == 0 ){
				c[i] = color;
				node[a[i]][color] = 1;
				node[b[i]][color] = 1;
				k = max(k,color);
				cout << "break" << endl;
				break;
			}
		}
	}
	cout << k << endl;
	for(int i = 0; i < N-1 ; i++){
		cout << c[i] << endl;
	}

	return 0;
}