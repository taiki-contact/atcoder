#include <bits/stdc++.h>
//#include <unistd.h>

using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
	int n,m,q;
	cin >> n>>m>>q;

	vector<vector<int>> input(q,vector<int>(4));
	rep(i,q){
		rep(j,4){
			cin >> input[i][j];
		}
	}

	vector<int> a;
	int score = 0;

	vector<int> dfs;

	for(int i = m; i>= 1; i--){
		dfs.push_back(i);
	}

	while(!dfs.empty()){
		// cout << "dfs:";
		// rep(i,dfs.size()) cout << dfs[i] << ",";
		// cout << endl;

		//cout << "dfs[-1]:" << dfs.back() <<endl;

		a.push_back(dfs.back());
		//cout << "a_push\n";

		// cout << "a:";
		// rep(i,a.size())cout << a[i] << ",";
		// cout << endl;

		if(a.size() == n){
			//cout << "asize = " << n << endl;
			int subscore = 0;
			rep(i,q){
				if(a[input[i][1]-1]-a[input[i][0]-1] == input[i][2]){
					subscore += input[i][3];	
				}
			}
			score = max(score,subscore);
			//cout << "score:" << score << ", subscore:" << subscore << endl;

			while( a.size() >0 && dfs.back() == a.back() ){
				dfs.pop_back();
				a.pop_back();
			}
		}

		else{
			//cout << "dfs_push\n";
			for(int i = m; i>= a.back();i--){
				dfs.push_back(i);

				// cout << "dfs:";
				// rep(i,dfs.size()) cout << dfs[i] << ",";
				// cout << endl;
			}
		}
		//sleep(1);
	}

	cout << score << endl;

	return 0;
}