#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
#include<cmath>

float findArea(float x, float y){return x*y;}

float calculatePrice(float area){
  if(area<120)
    return 99;
  else
    return 99 + ((area-120)*0.25);
}

int main(){
  float x, y;
  string response;
  cout<<"Enter the length of the room: ";
  cin>>response;
  x = stoi(response);
  cout<<"Enter the width of the room: ";
  cin>>response;
  y = stoi(response);
  double area = findArea(x, y);
  cout<<"Area: "<<area<<"\n";
  //cout<<"Cost: $"<<("%.2f", calculatePrice(area))<<"\n";
  cout<<"Cost: $"<<fixed<<setprecision(2)<<calculatePrice(area)<<"\n";
}


