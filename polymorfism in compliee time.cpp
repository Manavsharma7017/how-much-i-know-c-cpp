#include<iostream>
using namespace std;
//ambiquity 
class A{
 public:
 int a;
 // function overload
 void fu(){
    cout<<"i am in a"<<endl;
 }
 void fu(string name){
    cout<<"i am in a "<<name<<endl;
 }
 // opretar overload
 void operator+(A&obj){
      int v1=this->a;
      int v2=obj.a;
      cout<<v2-v1<<endl;
      cout<<"hi manav sharma"<<endl;
 }
};
int main(){
    A one,obj1,obj2;
    one.fu();
    one.fu("manav");
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;

}