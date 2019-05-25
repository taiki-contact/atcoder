#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	string S;
	cin >> S;
	int R=0; int B = 0;	
	for (int i = 0; i < N; ++i)
	{
		 if (S[i] == 'R'){
		 	R += 1;
		 }else B+=1;
	}
	string ans;
	if(R>B){
		ans = "Yes";
	}else ans = "No";

	cout << ans << endl;
	return 0;
}