#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> graph(n+1);
	vector<ll> distance(n+1,INF);
	vector<bool> check(n+1,false);
	vector<int> mark(n+1);
	distance[1] = 0;

	rep(i,m){
		int a,b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	// for(int i = 1; i<=n;i++){
	// 	cout << i << ":{";
	// 	for(int j=0; j <graph[i].size();j++){
	// 		cout << graph[i][j] << ",";
	// 	}
	// 	cout << "}\n";
	// }

	queue<int> que;
	que.push(1);

	while(!que.empty()){
		int pos = que.front();
		// cout << "pos:" << pos;

		if(check[pos] == true){
			que.pop();
			// cout << "already\n";
		}
		else{
			check[pos] = true;
			// cout << "check\n";
			for(int i = 0;i < graph[pos].size(); i++){
				int next = graph[pos][i];
				que.push(next);

				if(distance[pos] >= distance[next]+1){
					distance[pos] = distance[next]+1;
					mark[pos] = next;
				}
				// cout << "next:" << next << 
				// 		" distance:" << distance[pos] <<
				// 		"mark:" << mark[pos] << endl; 
			}
			que.pop();
		}
	}

	bool flag = true;
	for(int i = 1;i <= n;i++){
		if( check[i] == false){
			flag = false;
			break;
		}
	}

	if(flag){
		cout << "Yes\n";
		for(int i = 2; i<= n;i++){
			cout << mark[i] << endl;
		}
	}
	else cout << "No\n";


	return 0;
}
