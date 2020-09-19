#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	cin >> n;
	vector<ll> l(n);
	rep(i,n) cin >> l[i];

	int count=0;
	for(int i = 0; i< n-2; i++){
		for(int j = i+1; j<n-1; j++){
			for(int k = j+1; k<n; k++){
				if(l[i] != l[j] && l[j] != l[k] && l[i] != l[k]){
					if((abs(l[i]-l[j]) < l[k])&&(l[i]+l[j] > l[k])){
						count++;
					}
				}
			}
		}
	}
	cout << count << endl;

	return 0;
}