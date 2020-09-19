#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
	int n;
	string s;
	cin >>n>>s;
	int count =0;

	for(int i=1;i<=n-2;i++){
		for(int j=i+1; j<=n-1;j++){
			for(int k = j+1; k<=n;k++){
				if(s[i-1]!=s[j-1] && s[j-1]!=s[k-1] && s[i-1]!=s[k-1] 
					&& 2*j != i+k ) count ++;
			}
		}
	}
	
	cout << count << endl;

	return 0;
}