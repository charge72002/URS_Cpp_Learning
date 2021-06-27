#include<iostream>
using namespace std;
#include<iomanip>
#include<string> //to_string(), stoi()
#include<cmath> //abs value

int main(){
	//cout<<"Enter a positive integer or -1 to exit: \n";
	//int num;
	//cin>>num;
	
	//conditional syntax:
	bool repeat {true};
	while(repeat){
		cout<<"Enter a positive integer or -1 to exit: \n";
		int num;
		cin>>num;
			if(num==-1){
				repeat=false;
				cout<<"~~~ Thank You! ~~~\n";
			}else if(num%2 == 0){
				cout<<"Even number\n";
			}else{
				cout<<"Odd number\n";
			}	
	}
}
