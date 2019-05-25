#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	std::vector<int> L(N);
	int sum=0;

	for (int i = 0; i < N; i++)
	{
		cin >> L[i];
		sum += L[i] ;
	}
	sort(L.begin(),L.end());
	string ans = "Yes";

	if(sum-L[N-1] <= L[N-1])
		ans = "No";

	cout << ans << endl;

	return 0;
}