#include<iostream>
using namespace std;
#include<iomanip>
#include<string> //to_string(), stoi(), compare()
#include<cmath> //abs value

int main(){
	cout<<"Checking or Savings account?\n";
	string response;
	cin>>response;
	while( (response.compare("checking")!=0)
	       && (response.compare("Checking")!=0)
	       && (response.compare("savings")!=0)
	       && (response.compare("Savings")!=0) ){
	  cout<<"Invalid input. Try again.\n";
	  cin>>response;
	}
	/*
	switch(response){
	case "Checking":
	  cout<<"Checking Account";
	  break;
	case "Savings":
	  cout<<"Savings account";
	  break;
	}
	*/
	double balance, deposits, withdrawals;
	cout<<"What is the current balance?\n";
	//int balance;
	cin>>balance;
	cout<<"What is the total out of deposits?\n";
	//int deposits;
	cin>>deposits;
	cout<<"What is the total amount of withdrawals?\n";
	//int withdrawals;
	cin>>withdrawals;

	double currentBal {balance+deposits-withdrawals};
	cout<<"Current "<<response<<" balance: "<<currentBal<<"\n";
	/*
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
	*/
}
