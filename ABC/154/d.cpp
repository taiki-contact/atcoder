#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int N,K;
	cin >> N >> K;
	vector<int>sum(1001,0);
	vector<int>p(N+1);
	for(int i = 1; i<=N;i++){
		cin >> p[i] ;
	}
	for(int i = 1;i<=1000;i++){
		sum[i] = sum[i-1]+i;
		//cout << sum[i] << endl;
	}
	vector<double>E(N+1,0);
	for(int i = 1; i <= N; i++){
		E[i] = (double)(sum[p[i]])/(double)(p[i]);
	}

	vector<double> E_sum(N+1,0);
	double ans = 0.0;
	for(int i = 1; i<=N;i++){
		if(i <= K){
			E_sum[i] = E_sum[i-1] + E[i];
		}
		else{
			E_sum[i] = E_sum[i-1]+ E[i] - E[i-K];
		}
		ans = max(ans,E_sum[i]);
		//cout << i <<":"<< E[i]<<":"<<E[i-K] << ":"<< E_sum[i] << endl;
	}
	printf("%.12f\n",ans);

	return 0;
}