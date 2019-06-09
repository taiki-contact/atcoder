#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	int L,R;
	int L_res=1, R_res= N;

	for (int i = 0; i < M; i++)
	{
		cin >> L >> R;
		L_res = max(L,L_res);
		R_res = min(R,R_res);
	}

	cout << max(R_res - L_res + 1,0) << endl;
	return 0; 
}