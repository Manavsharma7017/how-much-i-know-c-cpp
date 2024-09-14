#include<iostream>
using namespace std;
 int main(){
    int arr[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
          cin>>arr[i][j];
        }
        
    }
    int sum[3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
          sum[i]=sum[i]+arr[i][j];
        }
        
    }
    for (size_t i = 0; i <size(sum); i++)
    {
        cout<<sum[i]<<endl;
    }
    cout<<sizeof(sum);
    
 }