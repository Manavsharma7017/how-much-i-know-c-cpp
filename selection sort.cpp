#include <iostream>
using namespace std;
void selectionsort(int arr[],int size){
  for (size_t i = 0; i < size; i++)                             
  { 
    for (size_t j =i+1; j < size; j++)
    {
      if(arr[i]>arr[j]){
         swap(arr[j],arr[i]);
      }
    }

  } 
 /*  or
 for (size_t i = 0; i < n; i++)
  { int minimumindex=i;
    for (size_t j =i+1; j < n; j++)
    {
      if(arr[minimumindex]>arr[j]){
         minimumindex=j;
      }
    }
    swap(arr[minimumindex],arr[i]);

  } 
  */  
}
int main(){
    int size_of_array;
    cout<<"enter size of array"<<endl;
    cin>>size_of_array;//5  4  2  3  1
    int arr [size_of_array];
    cout<<"enter your element"<<endl;
    for (size_t i = 0; i <size_of_array; i++)
    {
      cin>>arr[i];
    }
    selectionsort(arr,size_of_array);
    cout<<"your sorted array is"<<endl; 
    for (size_t i = 0; i <size_of_array; i++)
    {
      cout<<arr[i]<<endl;;
    }
}