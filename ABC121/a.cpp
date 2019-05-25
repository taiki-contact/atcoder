#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	int H,W,h,w;
	int ans;

	cin >> H >> W >> h >> w;

	ans = H*W - h*W - w*H + h*w;

	cout << ans << "\n";

	return 0;
}