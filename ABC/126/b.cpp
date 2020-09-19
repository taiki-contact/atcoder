#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define rep(i,s,n) for(int i=s;i<n;i++)
//#define rep(i,n) for(int i = 0;i<n;i++)

bool MorY(int x){
	if(1<= x && x<= 12) return true;
	else return false;
}

bool Y(int x){
	if(x == 0 || 13 <= x) return true;
	else return false;
}

int main(){
	string s ;
	cin >> s;

	int high = atoi(s.substr(0,2).c_str());
	int low =  atoi(s.substr(2,2).c_str());
	//int yflag = 0;
	//int mflag = 0;

	if( MorY(high) && Y(low)) cout<< "MMY\n";
	if( Y(high) && MorY(low)) cout << "YYMM\n";
	if(MorY(high) && MorY(high)) cout << "AMBIGUOUS\n";
	if(Y(high) && Y(low)) cout << "NA\n";


	return 0;
}