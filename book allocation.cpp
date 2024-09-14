#include <iostream>
#include <vector>
using namespace std;
bool ispossiable(int arr[],int size,int m,int mid){
    int studentcount =1;
    int pagesum =0;
    for (size_t i = 0; i < size; i++)
    {
     if (pagesum+arr[i]<=mid)
     {
        pagesum+=arr[i];
    }
    else{
        studentcount++;
        if(studentcount>m||arr[i]>mid){
            return false;

        }
        pagesum=arr[i];
    }
}
 return true;
}
int bookallocation(int arr[],int size,int m){
    int sum=0;
    for (size_t i = 0; i < size; i++)
    {
       sum =sum+arr[i];
    }
    int start = 0;
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans=-1;
    while (start<end)
    { 
        if (ispossiable(arr,size,m,mid))
        {
           ans=mid;
           end=mid;
        }
        else{
            start=mid+1;
        }
       mid = start + (end - start) / 2;  
    }
    return ans;
   
}
int main(){
   int arr[4]{10,20,30,40};
   int ans= bookallocation(arr,4,2);
   cout<<ans<<endl;
}
//bookallocation