#include<iostream>
using namespace std;
bool linersearch(int a[],int size,int key){
  for (size_t i = 0; i < size; i++){
    if (a[i]==key)
    {

     return 1;

    }
    
  }
  return 0;
}

  
int main(){
  int a[10]{1,2,3,4,5};
  cout<<"enter the value you want to search"<<endl;
  int b;
  cin>>b;
  bool found =linersearch(a,10,b);
   if (found==1){
    cout<<"key found"<<endl;
   }
   else{
    
    cout<<"key is absent"<<endl;
    }
  
return 0;

}