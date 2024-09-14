#include<iostream>
#include <cstring>
using namespace std;
class hero {
    public:
    int health ;
    char *name;
    hero(){
        
    }
    void set(int h,char *n){
        this->health=h;
        this->name=n;
    }
    // shallow copy
   /* hero(hero &temp){
        this->health=temp.health;
        this->name=temp.name;
    }
    */
    //deep copy
    hero(hero &temp){
        char * ch =new char(strlen(temp.name));
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
    }
    int geth(){
        return health;
    }


};
int main(){
 hero h1;
 char name[6]{"manav"};
  h1.set(10,name);
  hero h2(h1);
  cout<<h1.health<<endl;
  cout<<h2.health<<endl;
  cout<<h1.name<<endl;
  cout<<h2.name<<endl;
  name[0]='e';
  cout<<h1.health<<endl;
  cout<<h2.health<<endl;
  cout<<h1.name<<endl;
  cout<<h2.name<<endl;
 return 0;
}