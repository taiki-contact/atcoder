#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int INF = 1e8;

int main(){
	int N,M;
	cin >> N >> M;

	queue<P> q;
	vector< vector <char> > meiro(N, vector<char>(M));
	vector< vector <int> > dis(N, vector<int>(M,INF));
	int dx[] = {-1,1, 0,0};
	int dy[] = {0 ,0,-1,1};
	int gx,gy;

	for(int i = 0; i < N ; i++){
		for(int j = 0; j < M ; j++){
			cin >> meiro[i][j];
			if(meiro[i][j] == 'S'){
				q.push(P(i,j));
				dis[i][j] = 0;
			}
			if(meiro[i][j] == 'G'){
				gx = i;
				gy = j;
			}
		}
	}

	while(q.size() != 0){
		P xy = q.front(); 
		q.pop();
		if(xy.first == gx && xy.second == gy)break;

		for(int i = 0; i < 4 ; i++){
			int nx = xy.first  +dx[i];
			int ny = xy.second +dy[i];
			
			if(0 <= nx && nx < N && 0 <= ny && ny < M){
				if(meiro[nx][ny] != '#' && dis[nx][ny] == INF){
					q.push(P(nx,ny));
					dis[nx][ny] = dis[xy.first][xy.second] +1;
				}
			}
		}
	}

	cout << dis[gx][gy] << endl;
	return 0;
}