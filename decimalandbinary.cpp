#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num;
    cout<<"enter your number"<<endl;;
    cin>>num;
    int ans=0;
    int n=0;
    while(num!=0){
        int dig=num&1;
        ans=(dig*pow(10,n))+ans;
        n++;
       num= num>>1;
    }
    cout<<ans<<endl;
}