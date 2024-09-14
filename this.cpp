#include<iostream>
using namespace std;
class hero{
    public:
    int level;
    hero (int level){
        this->level=level;
    }
};
int main(){
    hero h1(10);
    cout<<h1.level<<endl;
    
}
