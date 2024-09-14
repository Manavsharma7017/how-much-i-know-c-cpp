#include<iostream>
using namespace std;
void reverse(int a[],int size){
   int s,e;
  s=0;
  e=size-1; 
 while (s<=e){
    
  swap(a[s],a[e]);
  s++;
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
