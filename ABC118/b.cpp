#include <iostream>
#include <vector>
#include <stdio.h>
#include <fstream>

int main(){
	std::ofstream fout("debug.txt");
	int people,kind;

	std::cin >> people >> kind ;
	fout << people << "\t" <<kind << "\n";

	int K1,K2,a;
	std::vector<int> A1,A2;
	std::vector<int> buf;
	std::string s;


	std::cin >> K1;
	fout << "K1: "<<K1 << "\n";

	for (int t = 0; t < K1; t++){
		std::cin >> a;
		A1.push_back(a);
	}

	// for (int t = 0; t < K1; t++){
	// 	fout <<A1[t] << ",";
	// 	if(t == K1-1)
	// 		fout << "\n";
	// }

	if(people ==1)
		std::cout << A1.size()<<"\n";

	else{
		for (int i = 0; i < people-1; i++)
		{	
			buf.clear();
			A2.clear();
			std::cin >> K2;
			fout << "K2: "<<K2 << "\n";

			for (int t = 0; t < K2; t++){
				std::cin >> a;
				A2.push_back(a);
			}

			// for (int t = 0; t < K2; t++)
			// {
			// 	fout << A2[t] << ",";
			// 	if(t == K2-1)fout << "\n";
			// }

			for (int j = 0; j < K1; j++){
				for (int l = 0; l < K2; l++){
					if(A2[l] == A1[j]){
						buf.push_back(A2[l]);
					}
				}
			}
			A1 = buf;
			K1 = buf.size();

			// for (int t = 0; t < K1; t++){
			// 	if(t==0)
			// 		fout << "buf: ";
			// 	fout <<A1[t] << ",";
			// 	if(t == K1-1)
			// 		fout << "\n";
			// }
		}
		std::cout << buf.size() << "\n";
	}

	fout.close();
	return 0;

}