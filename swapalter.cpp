#include<iostream>
using namespace std;
void swapalter(int a[],int size){
   int s,e;
  s=0;
  e=1; 
 while (e<size){
    
  swap(a[s],a[e]);
  s=s+2;
  e=e+2;
  }

}
  
int main(){
 int a[6]{3,4,5,6,7,8};
 
 swapalter(a,6);
   for (size_t i = 0; i < size(a); i++){
    cout<<a[i]<<endl;
    }
    return 0;
}