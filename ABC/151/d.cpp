#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int INF = 1e8;

int main(){
	int N,M;
	cin >> N >> M;

	vector< vector <char> > meiro(N, vector<char>(M));
	
	int dx[] = {-1,1, 0,0};
	int dy[] = {0 ,0,-1,1};

	for(int i = 0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> meiro[i][j];
		}
	}

	int ans= 0;

	for(int sx = 0; sx < N; sx++){
		for(int sy = 0; sy < M; sy++){
			for(int gx = 0; gx < N; gx++){
				for(int gy = 0; gy < M; gy++){

					if(meiro[gx][gy] == '#' || meiro[sx][sy] == '#')continue;

					vector< vector <int> > dis(N, vector<int>(M,INF));
					queue<P> q;

					q.push(P(sx,sy));
					dis[sx][sy] = 0;
					while(q.size()){
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
					cout <<sx<<","<<sy<<","<<gx<<","<<gy<<","<<dis[gx][gy]<<endl;
					if(dis[gx][gy] != INF)
						ans = max(ans,dis[gx][gy]);
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}