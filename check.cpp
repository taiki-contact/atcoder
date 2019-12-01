#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

int data[8] = {4,2,7,1,6,3,8,5};

void swap(int x,int y){
	int sub = data[y];
	data[y] = data[x];
	data[x] = sub;
	return;
}

void dump(){
	cout << "array:" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << data[i] << "," ;
	}
}

void func3(int from, int to){
	cout << "func3 from" << from << "to" << to << endl; 
	int i,m;
	if(from >= to -1 ) return;
	m = from;
	for(i = from +1; i<to ;i++){
		if(data[i] < data[from]){
			swap(++m,i);
		}
		dump();
		 cout << "in for sentence"<< "m" << m << " " 
		 << "i" << i << endl;
	}
	swap(from,m);
	dump();
	cout << endl;
	func3(from,m);
	func3(m+1,to);
}

int main(){
	func3(0,8);
	return 0;
}