#include <iostream>
using namespace std;
void pointerinc(){
    int num=5;
    cout<<"addres of num is "<<&num<<endl;//& is use for address  
    //addres of num is 0x2722bff6fc
    int* ptr=&num;
    cout<<ptr<<endl;//for address
    cout<<*ptr<<endl;//value at address 
}


void pointerinarray(){
   int arr[10]={1,2,3,4};
   cout<<"adders of first index "<<arr<<endl;
   cout<<"value at first index "<<arr[0]<<endl;
   cout<<"adders of first index "<<&arr[0]<<endl;
   cout<<"value at first index "<<*arr<<endl;
   cout<<"value at second index "<<*(arr+1)<<endl;
   cout<<"value at second index "<<1[arr]<<endl;
   int *ptr=&arr[0];
   cout<<"size of arr "<<sizeof(arr)<<endl;
   cout<<"size of pointer "<<sizeof(ptr)<<endl;
   ptr=ptr+1;
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
} 
void charpointer(){
   char arr[6]={"manav"};
   cout<<arr<<endl;
   cout<<&arr<<endl;
   char *p=&arr[0];
   cout<<p<<endl;
   cout<<&p<<endl;
 //  char *ptr="manan";//dont use wile working
 //  cout<<ptr<<endl;
}
void pointerfunction(int *p){
   cout<<*p<<endl;
}
void update(int *p){
    *p=*p+1;
}
void sizepointerarr(int arr[]){
  cout<<sizeof(arr)<<endl;
  //arr will be conisider as an pointer 
}

int main(){
 // pointerinc();
  //pointerinarray();
  //charpointer();
  //pointer to function;
   int a=9;
   cout<<a<<endl;
 pointerfunction(&a);
 update(&a);
 cout<<a<<endl;

 int arr[5]{1,2,3,4,5};
 sizepointerarr(arr);
} 