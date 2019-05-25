#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	std::vector<int> a(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	int res = 1000;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if( j == i)continue;
			
			for (int k = 0; k < 5; k++)
			{
				if(k == i or k == j)continue;

				for (int l = 0; l < 5; l++)
				{
					if(l == i or l == j or l == k)continue;

					for (int m = 0; m < 5 ; m++)
					{
						if(m == i or m == j or m == k or m == l)continue;

						for (int o : {i,j,k,l})
						{
							sum += a[o];
							sum = ( sum%10 != 0 ? (sum/10+1)*10 : sum );
						}
						sum += a[m];
						res = min(res,sum); 
						sum = 0;
					}
				}
			}
		}
	}
	cout << res << endl;

	return 0;
}