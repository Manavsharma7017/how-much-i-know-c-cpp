#include <iostream>
using namespace std;
void swap(int *x,int*y){
    int t=0;
    t=*y;
    *y=*x;
    *x=t;
}
int  main(){
    int a, b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"a is equal to "<<a<<endl;
    cout<<"b is equal to "<<b<<endl;
    return 0;

}