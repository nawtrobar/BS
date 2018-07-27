#include <cmath>
#include <iostream>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

int main(){
	srand(time(0));

	int N = 0;

	cout << "choose number of points" << endl;
	cin >> N;

	ofstream fout, fout2;

			fout.open("points");
			fout2.open("output");
	double y, z;
	int c = 0;
	for (int i = 1; i <= N; i++){
		 y = ((double) rand() / (RAND_MAX));
		 z = ((double) rand() / (RAND_MAX));
		if(y*y + z*z <= 1){ 
			c++;
			fout << y << " " << z << endl;
			double pi = double(c)*4/double(i);
			fout2 << y << " " << z <<  " " << pi << endl;
		}
	}
	return 0;
}
