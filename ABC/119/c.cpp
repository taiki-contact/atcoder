#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N,A,B,C;
vector<int> L(8);

int dfs(int depth,int a, int b, int c){
	if(depth == N){
		if(a==0 || b==0 || c==0)
			return 1e9;
		return abs(a-A)+abs(b-B)+abs(c-C);
	}
	int ans = 1e9;
	ans = min(ans, dfs(depth+1,a+L[depth],b,c)+(a >0 ? 10 : 0));
	ans = min(ans, dfs(depth+1,a,b+L[depth],c)+(b > 0 ? 10 : 0));
    ans = min(ans, dfs(depth+1,a,b,c+L[depth]) +(c > 0 ? 10 : 0));
    ans = min(ans, dfs(depth+1,a,b,c));
    return ans;
}

int main()
{	
	cin >> N >> A >> B >> C;

	for (int i = 0; i < N; i++)	{
		cin >> L[i];
	}
	cout << dfs(0,0,0,0) << endl;

	return 0;
}