#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void push(char C, int time){
	for (int i = 0; i < time; i++)
	{
		cout << C;
	}
}

int main(int argc, char const *argv[])
{
	int sx,sy,tx,ty;
	cin >>sx>>sy>>tx>>ty;

	push('U',ty-sy);
	push('R',tx-sx);
	push('U',1);
	push('L',tx-sx+1);
	push('D',ty-sy+1);
	push('R',1);
	push('R',tx-sx);
	push('U',ty-sy);
	push('R',1);
	push('D',ty-sy+1);
	push('L',tx-sx+1);
	push('U',1);
	cout << endl;
	
	return 0;
}