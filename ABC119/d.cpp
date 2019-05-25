#include <iostream>
#include <vector>

using namespace std;

long int min(long int a, long int b){
	if(a >= b)
		return b;
	else
		return a;
}

long int max(long int a, long int b){
	if(a >= b)
		return a;
	else
		return b;
}

long int abso(long int a){
	if(a<0)
		return -a;
	else
		return a;
}


int main()
{
	int A,B,Q;
	cin >> A >> B >> Q;

	std::vector<long int> s(A);

	for (int i = 0; i < A; i++){
		cin >> s[i];
	}

	std::vector<long int> t(B);
	for (int i = 0; i < B; i++){
		cin >> t[i];
	}

	std::vector<long int> x(Q);
	for (int i = 0; i < Q; i++){
		cin >> x[i];
	}

	std::vector<long int> ans(Q);
	

	long int s_l;
	long int s_itr = 0;
	long int t_l;
	long int t_itr = 0;
	long int l[2];
	long int s_l2;
	long int t_l2;
	long int x_1;

	for (int i = 0; i < Q; i++){
		
		s_l = abso(s[0]-x[i]);
		t_l = abso(t[0]-x[i]);

		for (int j = 1; j < A; j++){
			s_l = min(s_l,abso(s[j]-x[i]));
			if(s_l == abso(s[j]-x[i])){
				s_itr = j;
			}
		}

		for (int j = 1; j < B; j++){
			t_l = min(t_l,abso(t[j]-x[i]));
			if(t_l == abso(t[j]-x[i])){
				t_itr = j;
			}
		}

		l[0] = min(s_l,t_l);
		l[1] = max(s_l,t_l);

		for(int k = 0; k < 2; k++){
			if(l[k] == s_l){
				x_1 = s[s_itr];
				t_l2 = abso(t[0]-x_1);
				for (int j = 1; j < B; j++){
					t_l2 = min(t_l2,abso(t[j]-x_1));
				}
				l[k] = l[k] + t_l2;
			}
			else{
				x_1 = t[t_itr];
				s_l2 = abso(s[0]-x_1);

				for (int j = 1; j < A; j++){
					s_l2 = min(s_l2,abso(s[j]-x_1));
				}
				l[k] = l[k] + s_l2;
			}
		}

		ans[i] = min(l[0],l[1]);
		cout << ans[i] << "\n";

	}
	return 0;
}