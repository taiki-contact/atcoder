#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n;
	cin >> n;
	if (ceil(n/1.08) < (n+1)/1.08 )
	{
		cout << (int)ceil(n/1.08) << endl;	
	}
	else cout << ":(" << endl;


	return 0;
}