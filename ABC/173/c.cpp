#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int h,w,k;
	cin >> h >> w >> k;

	vector<vector<char>> c(h,vector<char>(w));
	vector<vector<char>> c_sub(h,vector<char>(w));
	rep(i,h){
		rep(j,w){
			cin >> c[i][j];
		}
	}

	int ans = 0;
	for(int i = 0; i< (1<<h); i++){
		for(int j = 0; j< (1 << w); j++){
			rep(x,h){
				rep(y,w){
					c_sub[x][y] = c[x][y];
				}
			}			
			int count = 0;


			rep(x,h){
				if( i &(1<<x)){
					rep(y,w) c_sub[x][y] = 'x';
				}
			}
			rep(y,w){
				if(j & (1 << y)){
					rep(x,h) c_sub[x][y] = 'x';
				}
			}

			rep(x,h){
				rep(y,w){
					if(c_sub[x][y] == '#')count++;
				}
			}
			//printf("i:%d,j:%d,count%d\n",i,j,count);
			if(count == k) ans++;
		}
	}
	cout << ans << endl;

	return 0;
}