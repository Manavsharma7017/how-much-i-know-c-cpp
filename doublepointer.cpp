#include<iostream>
using namespace std;
int main(){
    int a=9;
    int *ptr=&a;
    int **ptr1=&ptr;
    cout<<"value of a "<<a<<endl;
    cout<<"address of a "<<&a<<endl;
    cout<<"address of a "<<ptr<<endl;
    cout<<"value of a "<<*ptr<<endl;
    cout<<"address of ptr "<<ptr1<<endl;
    cout<<"value of ptr "<<*ptr1<<endl;
    int ***ptr2=&ptr1;
    cout<<*ptr2<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr1<<endl;
    }