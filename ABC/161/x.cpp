#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int first(int n){
	if(n-1 >=0)return n-1;
	else return 0;
}
int last(int n){
	if(n+1 < 9)return n+1;
	else return 9;
}

int main(){
	int k;
	int num =0;
	cin >> k;
	for(int a=0;a <= 9;a++){
		for(int b = 0; b<=9; b++){
			for(int c = 0;c<=9;c++){
				for(int d = 0;d<=9;d++){
					for(int e = 0;e<=9;e++){
						if( a == 0 && 
							b == 0 &&
							c == 0 &&
							d == 0 &&
							e == 0 )continue;
						else if
						else num++;
						cout << e << d << c<< b <<a << endl;
						if(num == k) return 0;;
					}
				}
			}
		}
	}
	return 0;
}