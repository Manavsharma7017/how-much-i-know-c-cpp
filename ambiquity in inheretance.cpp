#include<iostream>
using namespace std;
//ambiquity 
class A{
 public:
 void fu(){
    cout<<"i am in a"<<endl;
 }
};
class B{
 public:
 void fu(){
    cout<<"i am in b"<<endl;
 }
};
class c:public A,public B{

};
int main(){
    c obj;
    obj.A:: fu();
    obj.B:: fu();
    return 0;
    }
