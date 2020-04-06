#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int H,W;
	cin >> H >> W;
	vector< vector<int> > A(H,vector<int>(W));
	vector< vector<int> > B(H,vector<int>(W));
	int M = (H+W)*81;
	vector< vector <vector<bool> > > 
	DP(H,vector<vector<bool>>(W,vector<bool>(M,false)));
	
	
	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			cin >> B[i][j];
		}
	}


	DP[0][0][abs(A[0][0]-B[0][0])] = true;

	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			for(int k =0; k < M; k++){
				if(!DP[i][j][k])continue;

				int dis_j = abs(A[i][j+1]-B[i][j+1]);

				if(i < H-1){
					int dis_i = abs(A[i+1][j]-B[i+1][j]);
					DP[i+1][j][abs(k-dis_i)] = true;
					DP[i+1][j][k+dis_i] = true;
				}

				if(j < W-1){
					int dis_j = abs(A[i][j+1]-B[i][j+1]);
					DP[i][j+1][abs(k-dis_j)] = true;
					DP[i][j+1][k+dis_j] = true;
				}
			}
		}
	}

	for(int val = 0; val < M; val++){
		if(DP[H-1][W-1][val]){
			cout << val << endl;
			break;
		}
	}

	return 0;
}