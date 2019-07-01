#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	string S;
	cin >> S;
	int samei=0;
	string ans = "No";

	for (int i = 1; i < 4; i++){
		if (S[0] == S[i])
		{
			samei = i;
			if (samei == 1)
			{
				if(S[2]== S[3] && S[samei] != S[2])
					ans = "Yes";
			}
			else if(samei == 2){
				if(S[1] == S[3] && S[samei] != S[1] )
					ans = "Yes";
			}
			else if(samei == 3){
				if(S[1] == S[2] && S[samei] != S[1] )
					ans = "Yes";
			}
			break;
		}
	}

	cout << ans << endl;

	return 0;
}