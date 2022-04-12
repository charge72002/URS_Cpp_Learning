#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<cmath> //pi
#include<math.h> //pow, tanh

//returns gravitational acceleraton in cm/s^2
double calcGravity(double y){
  //constants in cgs    * G                      * \Sigma
  double C{ (-2 * M_PI) * (6.6743 * pow(10, -8)) * (9.84 * pow (10, -3)) };
  double H{ 7.715 * pow(10, 20) };
  //double C{ -4.126 * pow(10, -12) };
  //cout << C << endl;
  double g{ C * tanh(y/H) };
  return g;
}

//returns estimated ballistic velocity in cm/s
double calcVelocity(double y){
  double g = calcGravity(y);
  double v{sqrt( abs(2 * y * g) )};
  if(g<0) v*=-1;
  return v;
}

int main(){
  cout<<"Enter some y value in cm (e.g. 5.3e21 or -7e-19)"<<endl;
  string response;
  cin>>response;
  double number{stod(response.substr(0, response.find('e')))};
  double exponent{stod(response.substr(response.find('e')+1, response.length()))};
  double y = number*pow(10, exponent);
  cout<<y<<"cm"<<endl;
  
  //time to do math
  cout<<left;
  cout<<setw(30)<<"Gravity in cm/s^2: "<<"\t"<<calcGravity(y)<<endl;
  cout<<setw(30)<<"Estimated velocity in cm/s: "<<"\t"<<calcVelocity(y)<<endl;
}


