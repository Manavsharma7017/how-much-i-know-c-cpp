#include<iostream>
using namespace std;
int maxima(int a[],int size){
    int max=INT_MIN;
    for (size_t i = 0; i < size; i++)
    {
     if (a[i]>max)
     {
        max=a[i];
     }
     
    }return max;
    
}
int minima(int a[],int size){
    int min=a[0];
    for (size_t i = 0; i < size; i++)
    {
     if (a[i]<min)
     {
        min=a[i];
     }
     
    }return min;
    
}
int main(){
    int a[5]{89,101,509,-58,3};
    int b=maxima(a,5);
     int c=minima(a,5);
     cout<<"maxima="<<b<<endl<<"minima="<<c<<endl;
     return 0;
}