#include<iostream>
using namespace std;
 void unique(int a[],int size){
    int t =0;
  for (size_t i = 0; i < size; i++){
    t=t^a[i];


  }
    cout<<t<<endl;
}
  
int main(){
 int a[7]{2,2,3,5,4,3,5};
 unique(a,7);

    return 0;
}