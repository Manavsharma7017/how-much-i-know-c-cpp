#include<iostream>
using namespace std;
// single inherstance
 class human {
    
  public:
  int age;
  int heigth;
  int weight;

  void set(int age,int height,int w){
    this->age=age;
    this->weight=w;
    this->heigth=height;

  }
 };
 class male:public human{
    public:
    int color;
    void sleep(){
        cout<<"human is sleeping"<<endl;
    }
 };
 int main(){
    male manav;
    manav.set(89,175,6);
    cout<<manav.weight<<endl;
    cout<<manav.heigth<<endl;
    cout<<manav.age<<endl;
    manav.sleep();
    
 }
//parent to child
//pclass     mode      child
// pu         pu        pu
// pr         pu         na
// po        pu        po
//  pu        pr        pr
// pr         pr        na
//po           pr       pr
// pu          po      po
// pr          po        na
// po         po        po