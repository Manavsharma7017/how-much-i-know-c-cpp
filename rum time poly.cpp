#include<iostream>
using namespace std;
class a{
    public:
    void speak(){
        cout<<"hi manav"<<endl;
    }
};
class b:public a{
    public:
    void speak(){
        cout<<"hi manan"<<endl;
    }
};
int main(){
    b obj;
    obj.speak();
    return 0;
    
}