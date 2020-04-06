#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	vector< vector<int>> A(3,vector<int>(3));
	int n;
	for(int i = 0; i< 3; i++){
		for(int j = 0; j<3 ; j++){
			cin >> A[i][j];
		}
	}
	cin >> n;
	int b;
	vector<vector<int>> check(3,vector<int>(3,0));
	for(int i=0; i<n ; i++ ){
		cin >> b;
		for(int row = 0; row< 3; row++){
			for(int col = 0; col<3; col ++){
				if(b == A[row][col]) check[row][col] = 1;
			}
		}
	}
	// for(int row = 0; row< 3; row++){
	// 	for(int col = 0; col<3; col ++){
	// 		cout << check[row][col] ;
	// 	}
	// }

	string ans = "No\n";
	//row check
	for(int row = 0;row<3;row++){
		int flag = 1;
		for(int col = 0;col<3;col++){
			if(check[row][col] == 0)flag = 0;
		}
		if(flag == 1){
			ans = "Yes\n";
			cout << ans ;
			//cout << "no1\n";
			return 0;
		}
	}

	for(int col = 0;col<3; col++){
		int flag = 1;
		for(int row = 0;row<3; row++){
			if(check[row][col] == 0)flag =0;
		}
		if(flag == 1){
			ans = "Yes\n";
			cout << ans;
			//cout << "no2\n";
			return 0;
		}
	}
	if((check[0][0]== 1 && check[1][1] == 1 && check[2][2] == 1) ||
		(check[2][0] == 1 && check[1][1]==1 && check[0][2]==1)){
			ans ="Yes\n";
			cout << ans ;
			//cout << "no3\n";
			return 0;
	}

	cout << ans ;
	return 0;
}