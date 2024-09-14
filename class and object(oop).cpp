#include <iostream>
using namespace std;

class hero{  //user define datatype
 public://access modifier
  int health;
 private:
  char nemw[100];
 
};
int main(){
  hero h1; // object is h1
  cout<<sizeof(h1)<<endl;
  cin>>h1.health;
  cout<< "health "<<h1.health<<endl;
  return 0;
}

