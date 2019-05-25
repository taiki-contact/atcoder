#include <iostream>
#include <vector>
#include <algorithm>


int map[] = {2,5,5,4,5,6,3,7,6};


bool find_num(std::vector<int> input,int num){
	if(std::find(input.begin(),input.end(),num) != input.end())
		return true;
	else
		return false; 
}

void check235(std::vector<int> input){
	if(find_num(input,2) and find_num(input,3))
		input.erase(std::find(input.begin(),input.end(),2));

	if(find_num(input,3) and find_num(input,5))
		input.erase(std::find(input.begin(),input.end(),3));

	if(find_num(input,2) and find_num(input,5))
		input.erase(std::find(input.begin(),input.end(),2));
}

void check69(std::vector<int> input){
	if(find_num(input,6) and find_num(input,9))
		input.erase(std::find(input.begin(),input.end(),6));
}

class Data{
	public:
		int num;
		int match;
		int time;
};

void output(std::vector<Data> d,int M){
	std::sort(d.begin(),d.end(),
		[](const Data& x,const Data& y){return x.num > y.num;});

	for (int i = 0; i < M; i++){
		if(d[i].time >=1 ){
			for (int j = 0; j < d[i].time; j++){
				std::cout << d[i].num;
			}
		}
	}
	std::cout << "\n";
}

int main(){

	int N;
	int M;

	std::cin >> N >> M;
	std::vector<int> input(M);

	for (int i = 0; i < M; i++){
		std::cin >> input[i];
	}

	check235(input);
	check69(input);

	std::vector<Data> d(M);

	for (int i = 0; i < M; i++){
		d[i].num = input[i];
		d[i].match = map[input[i] -1];
		d[i].time = 0;
	}

	std::sort(d.begin(),d.end(),
		[](const Data& x,const Data& y){return x.match < y.match;});

	int rest = N;
	int itr = 0;

	while(rest!=0){

		if(rest < d[itr].match){
			if(itr == M-1 && d[itr].time > 0){
				itr = 1;
				d[0].time = d[0].time -1;
				d[M-1].time = d[M-1].time -1;
				rest = rest + d[0].match + d[M-1].match;
			} 
			else{
				rest += d[itr].match;
				d[itr].time = d[itr].time -1;
				itr++; 
			}
		}
		else{
			rest = rest - d[itr].match;
			d[itr].time++;
		}



	}
	output(d,M);
	return 0;
}

