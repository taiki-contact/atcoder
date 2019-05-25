#include <iostream>
#include <vector>

using namespace std;

int main(){
	int H,W;
	cin >> H >> W;
	vector< vector<int> > A(H+2,vector<int>(W+2));
	vector< vector<int> > Anext(H+2,vector<int>(W+2)); 

	char a;
	int sum = 0;
	int count = 0;

	for (int i = 1; i < H+1; i++){
		for (int j = 1; j < W+1; j++)
		{
			cin >> a;
			if (a == '#') {
				A[i][j] = 1;
				Anext[i][j] = 1;
				sum += 1;
			}
			else{
				A[i][j] = 0;
				Anext[i][j] = 0;
			}
		}
	}

	while(sum != H*W){
		sum = 0;
		for (int i = 1; i < H+1; i++){
			for (int j = 1; j < W+1; j++)
			{
				if (A[i][j] == 1)
				{
					Anext[i-1][j] = 1;
					Anext[i+1][j] = 1;
					Anext[i][j+1] = 1;
					Anext[i][j-1] = 1;
				}
			}
		}

		for (int i = 1; i < H+1; i++){
			for (int j = 1; j < W+1; j++)
			{
				sum += Anext[i][j];
				A[i][j] = Anext[i][j];
			}
		}
		count += 1;
	}
	cout << count << endl;

	return 0;
}