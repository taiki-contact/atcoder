#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void dfs(vector< vector<char>>& v, int i, int j, int N, int M){
	cout << "dfs" << endl;
	v[i][j] = '.';
	for(int dx = -1; dx <= 1;dx++){
		for(int dy = -1; dy <= 1; dy++){
			int x = i+dx;
			int y = j+dy;
			cout << "x:" << x << " y:" << y << endl;
			if( 0 <=x && x < N && 0 <= y && y < M &&
				v[x][y] == 'w'){
				cout << "---" ;
				dfs(v,x,y,N,M);
			}
		}
	}
	
	return ;
}


int main(){

	int N,M;
	cin >> N >> M;

	vector< vector<char> > water( N, vector<char>(M));
	for (int i = 0; i < N; i++){
		for(int j = 0; j < M ; j++){
			cin >> water[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cout << "i:" << i << " j:" << j << " :" << water[i][j] << endl;
			if(water[i][j] == 'w'){
				dfs(water,i,j,N,M);
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}