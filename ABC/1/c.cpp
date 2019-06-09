#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	double deg;
	int dis;

	cin >> deg >> dis;

	string dir;
	int w;

	if(112.5 <= deg && deg < 337.5)
		dir = "NNE";
	else if(337.5 <= deg && deg < 562.5)
		dir = "NE";
	else if(562.5 <= deg && deg < 787.5)
		dir = "ENE";
	else if(787.5 <= deg && deg < 1012.5)
		dir = "E";
	else if(1012.5 <= deg && deg < 1237.5)
		dir = "ESE";
	else if(1237.5 <= deg && deg < 1462.5)
		dir = "SE";
	else if(1462.5 <= deg && deg < 1687.5)
		dir = "SSE";
	else if(1687.5 <= deg && deg < 1912.5)
		dir = "S";
	else if(1912.5 <= deg && deg < 2137.5)
		dir = "SSW";
	else if(2137.5 <= deg && deg < 2362.5)
		dir = "SW";
	else if(2362.5 <= deg && deg < 2587.5)
		dir = "WSW";
	else if(2587.5 <= deg && deg < 2812.5)
		dir = "W";
	else if(2812.5 <= deg && deg < 3037.5)
		dir = "WNW";
	else if(3037.5 <= deg && deg < 3262.5)
		dir = "NW";
	else if(3262.5 <= deg && deg < 3487.5)
		dir = "NNW";
	else 
		dir = "N";

	double vel = dis / 60.0 + 0.000001;
	vel = round(vel*10)/10 ;

	if (0.0 <= vel && vel <= 0.2)
		w = 0;
	else if (0.3 <= vel && vel <= 1.5)
		w = 1;
	else if (1.6 <= vel && vel <= 3.3)
		w = 2;
	else if (3.4 <= vel && vel <= 5.4)
		w = 3;
	else if (5.5 <= vel && vel <= 7.9)
		w = 4;
	else if (8.0 <= vel && vel <= 10.7)
		w = 5;
	else if (10.8 <= vel && vel <= 13.8)
		w = 6;
	else if (13.9 <= vel && vel <= 17.1)
		w = 7;
	else if (17.2 <= vel && vel <= 20.7)
		w = 8;
	else if (20.8 <= vel && vel <= 24.4)
		w = 9;
	else if (24.5 <= vel && vel <= 28.4)
		w = 10;
	else if (28.5 <= vel && vel <= 32.6)
		w = 11;
	else if (32.7 <= vel)
		w = 12;

	if(w ==0)
		dir = "C";

	cout << dir << " " <<w << "\n";
	return 0;
}