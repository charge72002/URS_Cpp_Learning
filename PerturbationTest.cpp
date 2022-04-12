#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
#include<cmath>

int main(){
	cout << M_PI;
	for(int i=0; i<100; i++){
		//https://www.techiedelight.com/generate-random-float-value-in-cpp/
		cout << (rand() * M_PI) / RAND_MAX;
		cout << "\n";
	}
}
