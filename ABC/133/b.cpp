#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

typedef long long ll;

int main(){
	int n,d;
	cin >> n >> d;
	vector<vector <int>> x(n,vector<int>(d));

	for (int i = 0; i < n; i++){
		for (int j = 0; j < d; j++){
			cin >> x[i][j];
		}
	}

	int count = 0;

	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++){
			double kyori = 0;
	
			for (int k = 0; k < d ; k++)
			{
				//cout << x[i][k] << x[j][k] << endl;
				kyori += (x[i][k]- x[j][k])*(x[i][k]- x[j][k]);
				//cout << "kyori" << kyori<< endl;
			}
			kyori = pow(kyori,0.5);
			//cout << "kyori" << kyori<< endl;
			if(ceil(kyori) == floor(kyori)){
				count += 1;
			}
		}
		
	}
	cout << count << endl;

	return 0;
}