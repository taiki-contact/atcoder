#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int x;
	cin >> x;
	int r = x%100;
	int ans=0;
	for (int b = 0; b <= r ; b++){
		for (int c = 0; c <= r/2 ; c++){
			for (int d = 0; d <= r/3 ; d++){
				for (int e = 0; e <= r/4 ; e++){
					for (int f = 0; f <= r/5 ; f++){
						int total = b+2*c+3*d+4*e+5*f;
						if (total == r)
						{
							if(100*(b+c+d+e+f)+total <= x){
								ans = 1;
								break;
							}
						}					
					}
				}
			}
			
		}
	}
	cout << ans << endl;


	return 0;
}