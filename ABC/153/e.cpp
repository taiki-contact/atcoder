#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct spell{
	int a;
	double b;
	double c;

	bool operator<(const spell& another)const{
		if(c != another.c)
			return c > another.c;	
		return b < another.b;
	}
};

int main(){
	int h,n;
	int a_in,b_in;
	cin >> h >> n;
	vector<spell> magic(n);
	for(int i=0; i<n;i++){
		cin >> a_in >> b_in;
		magic[i].a = a_in;
		magic[i].b = b_in;
		magic[i].c = (a_in*1.0)/b_in;
	}
	sort(magic.begin(), magic.end());
	// for(int i = 0; i<n; i++){
	// 	printf("a:%d,b:%lf,c:%lf\n",
	// 		magic[i].a,magic[i].b,magic[i].c);
	// }

	int sum =0;
	int i = 0;

	while(h > 0){
		if(h >= magic[i].a ){
			h = h - magic[i].a;
			sum += magic[i].b; 
		}
		else{
			i++;
			h = h- magic[i].a;
			sum += magic[i].b;
		}
		// printf("%d,h:%d, a:%d, b:%lf\n",
		//  	i,h,magic[i].a,magic[i].b);
	}
	cout << (int)sum << endl;

	return 0;
}