#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	ll N,Y;
	cin >> N >> Y;
	Y = Y/1000;  

	int x,y,z;
	for (int yi = 0; yi <= 1 ; yi++){
		for (int zi = 0; zi <= 4; zi++){
			if((Y-yi*5-zi)%10  == 0)
			{
				x = (Y-yi*5-zi) / 10;
				y = yi;
				z = zi;
				break;
			}
		}
	}
	//cout << ":" << x << " "<< y << " " << z << endl;
	int xyz;
	int x_ans = -1,y_ans = -1,z_ans = -1;

	for (int i = 0; i <= x; i++)
	{
		xyz = i + (x-i)*2 + y + z;
		if (N - xyz >= 0)
		{
			//cout << N-xyz << endl;
			if (N == xyz)
		 	{
		 		x_ans = i;
		 		y_ans = (x-i)*2 + y;
		 		z_ans = z;
		 		break;
		 	} 

		 	else if ((N - xyz)%4 == 0)
		 	{	
		 		y_ans_sub = (x-i)*2+ y - (N-xyz)/4;
		 		if(y_ans_sub >= 0){
		 			x_ans = i;
		 			y_ans = y_ans_sub;
		 			z_ans = z + 5*((N-xyz)/4);
		 		}
		 	}
		}
	}
	cout<< x_ans << " "
		<< y_ans << " "
		<< z_ans << endl;

	return 0;
}