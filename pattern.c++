#include<iostream>
using namespace std;

void pramide(int n){
  for(int i=0;i<n;i++){
    for(int j=n-i-1;j>0;--j){
        cout<<" ";
    }
    for(int j=0;j<i*2+1;j++){
        cout<<"*";
    }
    for(int j=n-i-1;j>0;--j){
        cout<<" ";
    }
    cout<<""<<endl;
  }
}
void binary(int n){
   bool count=1;
    for (int i = 1; i <= n; i++)
    {
           if(i%2==0){
            count=0;
           }else{
            count =1;
           }
     for(int j=0;j<i;j++){
   
           
           cout<<count;
           count=!count;
       
     }   
     cout<<""<<endl;
    }
    
}

int main(){
  int n;
  cin>>n;
 // pramide(n);
binary(n);
return 0;

} 