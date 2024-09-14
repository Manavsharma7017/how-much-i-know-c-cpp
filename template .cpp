#include<iostream>
using namespace std;
 template<class t> 
 class v{
  public:
   t a;
    tsum(v & m){
       t s=this->a-m.a;
       return s;
   }
   v(){

   }
 };
 int main(){
    v <int> obj1;
    obj1.a=50;
    v <int> obj2;
    obj2.a=99;
    cout<<obj1.tsum(obj2)<<endl;


 }
