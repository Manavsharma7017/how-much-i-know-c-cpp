#include<iostream>
using namespace std;
class hero{
    public:
    int level;
    hero(){
        cout<<"constructer is live"<<endl;
        cin>>level;
    }
    //parameter in constructer
    hero(int level){
        this->level=level;
    }
    //copy constructer 
    hero(hero & temp){
        this->level=temp.level;
    }

};
int main(){
    hero h3;
    cout<<"your level in h3 is "<<h3.level<<endl;
    hero h4(10);
    cout<<"your level in h4 is "<<h4.level<<endl;
    //copy constructer id default but we can also make it
    hero h5(h3);
    cout<<"your level in h5 is "<<h5.level<<endl;

    return 0;

}