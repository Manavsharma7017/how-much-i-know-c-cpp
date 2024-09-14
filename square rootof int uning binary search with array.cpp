#include<iostream>
using namespace std;
void arraymaker(int arr[],int n ){
    for (size_t i = 0; i < n; i++)
    {
       arr[i]=i;

    }
}
int squareroot(int arr[],int size,int n){
    int s=0;
    int e=size-1;
    int mid=s+ (e - s) / 2;
    while (s<e)
    {
        int entery=arr[mid];
        int ans=entery*entery;
      if (ans==n)
      {
       return entery;
      }
      else if (ans<n)
      {
        s=mid+1;
      }
      else{
        e=mid;
      }
      mid=s+ (e - s) / 2;
      
    }
    return -1;
}
int main(){
    int number;
    cout<<"enter the number of which you find the root"<<endl;
    cin>>number;
    int size_of_array=number+1;
    int arr[size_of_array];
    arraymaker(arr,size_of_array);
    int ans=squareroot(arr,size_of_array ,number);
    cout<<"root of "<<number<<" is "<<ans<<endl;
    return 0;

}