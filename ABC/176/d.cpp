#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int h,w;
	cin >> h >> w;
	int sx, sy, gx, gy;
	cin >> sx >> sy >> gx >> gy;
	vector<vector<char>> s(h,vector<char>(w));
	//vector<vector<bool>> check(h,vector<bool>(w, false));
	rep(i,h)rep(j,w)cin >> s[i][j];

	stack<P> stack;
	stack.push(P(sx-1,sy-1));

	P goal = P(gx-1, gy-1);
	vector<vector<int>> d1 = {{0,-1},{0,1},{-1,0},{1,0}};

	vector<vector<int>> d2 = {
					{-2,2},{-1,2},{0,2},{1,2},{2,2},
					{-2,1},{-1,1}, 		{1,1},{2,1},
					{-2,0},					   {2,0},
					{-2,-1},{-1,-1},		{1,-1},{2,-1},
					{-2,-2},{-1,-2},{0,-2},{1,-2},{2,-2}};

	
	int count = 0;
	while(!stack.empty()){
		P pos = stack.top();
		//check[pos.first][pos.second] = true;
		s[pos.first][pos.second] = '#';
		stack.pop();
		//goal
		if(pos == goal ){
			cout << count << endl;
			return 0;
		}
		bool flag = false;

		P next;
		rep(i,d1.size()){
			next.first = pos.first+d1[i][0];
			next.second = pos.second+d1[i][1];
			if(0 <= next.first && next.first < h && 0<=next.second && next.second < w){
				if(s[next.first][next.second] == '.') {
					stack.push(next);
					flag = true;
				}
			}
		}

		if(!flag && stack.empty()){
			bool count_flag = false;
			rep(i,d2.size()){
				next.first = pos.first+d2[i][0];
				next.second = pos.second+d2[i][1];

				if(0 <= next.first && next.first < h && 0<=next.second && next.second < w){
					if(s[next.first][next.second] == '.') {
						stack.push(next);
						count_flag = true;
					}
				}
			}
			if(count_flag) count++;
			//cout << "jump" << endl;
		}
		// rep(i,h){
		// 	rep(j,w) cout << s[i][j];
		// 	cout << endl;
		// }
		// cout << "----------------------" << endl;

	}

	cout << -1 << endl;

	return 0;
}