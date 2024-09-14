#include <iostream>
#include <string>
using namespace std;
class hero
{
private:
  string name;
  int age;
public:
   void setage(int age){
      this->age=age;
   }
  void setstring(string name){
    this->name=name;
   }
   int getage(){
    return age;
   }
   string getstring(){
    return name;
   }


};
int main(){
    hero h1;
     h1.setage(10);
     string name;
     getline(cin,name);
     h1.setstring(name);
     cout<<h1.getage()<<h1.getstring()<<endl;
    return 0;
}


