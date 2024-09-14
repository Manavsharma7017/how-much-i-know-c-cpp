#include<iostream>
using namespace std;
// multi level inherstance
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
        cout<<"male is sleeping"<<endl;
    }
    void setcolor( int c){
      this->color=c;
    }
 };
 class malechild:public male{
  public:
  int chlidsize;
  void csleep(){
        cout<<"child is sleeping"<<endl;
  }
  void setchildsize( int s){
      this->chlidsize=s;
  }
 };

 int main(){
  human h;
  male m;
  malechild c;
  h.set(12,175,75);
  m.set(13,180,80);
  m.setcolor(23);
  c.set(1,40,20);
  c.setcolor(20);
  c.setchildsize(13);
  cout<<h.age<<endl;
  cout<<h.heigth<<endl;
  cout<<h.weight<<endl;
   cout<<m.age<<endl;
  cout<<m.heigth<<endl;
  cout<<m.weight<<endl;
  cout<<m.color<<endl;
  m.sleep();
   cout<<c.age<<endl;
  cout<<c.heigth<<endl;
  cout<<c.weight<<endl;
  cout<<c.color<<endl;
  cout<<c.chlidsize<<endl;
  c.sleep();
  c.csleep();
  return 0;
 }
