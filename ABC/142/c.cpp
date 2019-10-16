#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;
class student{
	public:
		int num;
		int order;
};

bool cmp(const student &a, const student &b){
	return a.order < b.order ;
}

int main(){
	int N;
	cin >> N;
	std::vector<student> A(N);

	for (int i = 0; i < N; i++)
	{
		A[i].num = i+1;
		cin >> A[i].order;
	}

	sort(A.begin(),A.end(),cmp);
	for (int i = 0; i < N; i++)
	{
		cout << A[i].num << " " ;
	}
	cout << endl;

	return 0;
}