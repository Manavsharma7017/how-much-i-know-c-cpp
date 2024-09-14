#include <iostream>
using namespace std;
class hero{
    public:
    int h;
    static int man;
};

 int hero ::man=5;
int main(){
    cout<<hero::man<<endl;
return 0;
 }