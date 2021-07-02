#include<iostream>
using namespace std;
#include<string>
#include<iomanip>

int main(){
  //Sentinental values: used to indicate the end of loop
  string response;
  int score{0};
  cout<<"Enter the score for the first game or 'exit' to exit: ";
  cin>>response;
  // || (response.compare("Exit")!=0) 
  while(response.compare("exit")!=0){
    score += stoi(response);
    cout<<"Total: "<<score;
    cout<<"\nEnter the score for the next game or 'exit' to exit: ";
    cin>>response;
  }
  cout<<"Grand Total: "<<score<<"\n";
}
