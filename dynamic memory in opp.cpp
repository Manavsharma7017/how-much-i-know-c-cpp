#include<iostream>
using namespace std;
class hero{
   private:
    int health;
    int level;
   public:
   void sethealth(int h){
    health=h;
   } 
   void setlevel(int l){
    level=l;
   } 
   int gethealth(){
    return health;
   }
    int getlevel(){
    return level;
   }
};
int main(){
    hero *h2=new hero;//dynamic memory allocation
    h2->sethealth(100);
    //"or"
    (*h2).setlevel(50);
    cout<<"health is "<<h2->gethealth()<<endl;
    cout<<"level is "<<h2->getlevel()<<endl;
    return 0;

}