#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

int main(){
	bool repeat {true};
	string delimiter {"d"};

	while (repeat){
		cout<<"\nEnter a command in the form: #dice + d + #sides\n";
		cout<<"e.g. \"1d20\" or 4d6\n";
		cout<<"Or enter \"exit\" to exit.\n";	

		string userInput;
		cin>>userInput;
		if(userInput.compare("exit")==0){
			repeat=false;
			cout<<"~~~ Thank You! ~~~\n";
		}else{
			string tokenA = userInput.substr(0, userInput.find("d"));
			string tokenB = userInput.substr(userInput.find("d")+1, userInput.length());
			int numDice = stoi(tokenA, nullptr, 0);
			int numSides = stoi(tokenB, nullptr,0);
			string rolls {"{ "};
			int total {0};
				for(int i {0}; i<numDice; i++){
					int num{ (rand() % numSides)+1 };
					rolls = rolls + to_string(num) + " ";
					total += num;
				}
			rolls = rolls + "}";
			cout<<"Rolls: " + rolls + "\n";
			cout<<"Total: "<<total<<"\n";
			//cout<<tokenA + ", " + tokenB + "\n";
				
		}	
	}
}
