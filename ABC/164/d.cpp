#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
ll mod=1e9+7;

int main(){
	string s;
	cin >> s;

	vector<string> list;
	//vector<ll> num_list;
	for(int k = 6; k<=999; k++){
		//num_list.push_back(2019 * (k+1));
		list.push_back( to_string(2019*k) );
	}

	int count = 0;
	if(s.size() <= 4){
		cout << 0 << endl;
		return 0;
	}
	else{
		for(int i = 0; i < list.size(); i++){
			for(int j = 0; j <= s.size() - list[i].size(); j++){
				string comp_s = s.substr(j,list[i].size());
				if(comp_s == list[i]) count++;
			}
		}
	}
	
	cout << count << endl;

	return 0;
}