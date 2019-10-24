#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	std::vector<int> L(N);
	for (int i = 0; i < N; i++)
	{
		cin >> L[i];
	}

	sort(L.begin(), L.end());
	int sum =0;
	/*for (int i = 0; i < N; ++i)
	{
		cout << L[i];
	}
	cout << endl;*/

	for (int a = 0; a < N-2 ; a++){
		for (int b = a+1; b < N-1; b++){
			int key = L[a]+L[b];
			int left = b;
			int right = N;
			while(right - left > 1){
				int mid = left + (right - left)/2;
				if (L[mid] >= key) right = mid;
				else left = mid; 
			}
			//cout << key << ":" << left << ":" << b <<  endl;
			sum += (left - b);
		}
	}
	cout << sum << endl;

	return 0;
}