#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<int> s(n);
	vector<int> t(n);

	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	for(int i = 0; i < n; i++){
		cin >> t[i];
	}

	vector<pair<int,int>> task(n);
	for(int i = 0; i<n; i++){
		task[i].first = t[i];
		task[i].second = s[i];
	}
	sort(task.begin(),task.end());
	for(int i = 0; i <n; i++){
		cout << task[i].first << ":"<< task[i].second << endl;
	}

	int ans = 0; 
	int end = 0;

	for(int i = 0; i <n; i++){
		if(task[i].second > end){
			end = task[i].first;
			ans++;
		}
	}
	cout << ans << endl;

	return 0;
}