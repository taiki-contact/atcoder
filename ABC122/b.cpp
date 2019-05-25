#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	string S;

	cin >> S;
	int size;
	size = S.size();
	vector<int> count(10,0);
	int j = 0;

	for (int i = 0; i < size; i++){
		if (S[i] == 'A' or S[i] == 'T' or S[i] == 'G' or S[i] == 'C')
			count[j] += 1;
		else if(count[j] >= 1)
			j += 1;
	}

	int max = *std::max_element(count.begin(), count.end());

	cout << max << "\n";

	return 0;
}