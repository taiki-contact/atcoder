#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){

	string S;
	cin >> S;
	int i = 0;

	while( i < S.length()){
		string test = S.substr(i,5);
		if(test == "dream"){
			if(S[i+5] == 'e'){
				if (S[i+6] == 'r'){
					if(S[i+7] == 'a'){
						i = i+5;
						//cout << "dream era" << endl; 
					}
					else{
						i = i+7;
						//cout << "dreamer not a" << endl;
					}
				}
				else{ 
					//cout << "break r" << endl;
					break;
				}
			}
			else{
				i = i+5;
				//cout << "dream not e" << endl;
			}	
		}
		else if(test == "erase"){
			if (S[i+5] == 'r'){
				i = i+6;
				//cout << "eraser" << endl;
			}
			else{
				i = i+5;
				//cout << "erase not r" << endl;
			}
		}
		else{
			//cout << "not correspond" << endl; 
			break;
		}
	}


	string ans ;
	if (i == S.length())
		ans = "YES";
	else ans = "NO";

	cout << ans << endl;
	
	return 0;
}