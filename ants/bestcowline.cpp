#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<char> s(n);
	for(int i = 0; i< n; i++){
		cin >> s[i];
	}

	vector<char> t;
	int start = 0;
	int end = n-1;

	while(start <= end){
		bool left = false;
		for(int i = 0; start+i <= end; i++){
			if(s[start+i] < s[end-i]){
				left = true;
				break;
			}
			else if(s[start+i] > s[end-i]){
				left = false;
				break;
			}
		}
		if(left){
			t.push_back(s[start]);
			start++;
		}
		else{
			t.push_back(s[end]);
			end--;
		}
	}
	for(int i = 0;  i< n; i++){
		cout << t[i] ;
	}
	cout << endl;

	return 0;
}