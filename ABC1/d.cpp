#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	
	int N;
	cin >> N;

	int start,end;
	char c;
	int state = 0;

	vector<int> time_(290,0);

	for (int i = 0; i < N; i++){
		cin >> start >> c >> end;

		if(start % 10 >= 5 )
			start = start/10*10 + 5;
		else start = start/10*10;

		if (end % 10 >= 6)	
			end = (end+5)*10/10;
		else if(end % 10 >= 1)
			end = end/10*10 +5 ;

		start = (start/100)*60 + start%100;
		end = (end/100)*60 + end%100;

		int hour = (end - start)/60;
		int min = (end - start) % 60;

		int wide = hour * 12 + min / 5; 
		int s_index = start/60 * 12 + start%60/5; 

		for (int j = s_index; j < s_index + wide; j++){
			time_[j] = 1;
		}
	}

	string h,m;

	for (int i = 0; i < 290; i++){
		if(time_[i] == 1 && state == 0 ){
			if(i/12/10 == 0)
				h = '0' + to_string(i/12);
			else h = to_string(i/12);

			if((i%12)*5/10 == 0)
				m = "0" + to_string((i%12)*5);
			else m = to_string((i%12)*5);

			cout << h << m << "-";
			state = 1;
		}

		if(time_[i] == 0 && state ==1){
			if(i/12/10 == 0)
				h = '0' + to_string(i/12);
			else h = to_string(i/12);

			if((i%12)*5/10 == 0)
				m = "0" + to_string((i%12)*5);
			else m = to_string((i%12)*5);

			cout << h << m << "\n";
			state = 0;
		}
	}

	return 0;
}
