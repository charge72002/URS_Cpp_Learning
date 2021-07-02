#include<iostream>
using namespace std;

int main(){
  string colors [] {"red", "orange", "yellow", "green",  "blue", "indigo", "violet"};
  for(int i = 0; i<(sizeof(colors)/sizeof(colors[0])); i++){
    cout<<colors[i]<<endl;
  }

  /*
    //ForEach loops also work:
    for(string s:colors){
    cout<<s<<endl;
    }
   */
}
