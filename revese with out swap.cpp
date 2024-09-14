#include<iostream>
using namespace std;

void reverse(int a[],int size){
   int e;
  e=size-1; 
    for (size_t i = 0; i < e; i++)
    {
      int t=a[i];
        a[i]=a[e];
        a[e]=t;
        e--;
    }
  }
int main(){
 int a[5]{3,4,5,6,7};
 
 reverse(a,5);
   for (size_t i = 0; i < size(a); i++){
    cout<<a[i]<<endl;
    }
    return 0;
}