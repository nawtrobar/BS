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

	ofstream fout;
	fout.open("points");

	for (int i = 1; i <= N; i++){
		double x = ((double) rand() / (RAND_MAX));
		double y = ((double) rand() / (RAND_MAX));
		if(x*x + y*y <= 1){
			fout << x << " " << y << endl;
		}

	}
	return 0;
}
