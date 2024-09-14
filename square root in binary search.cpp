#include <iostream>
using namespace std;
int root_int_value(int n){
    int start = 0,ans =0;
    int end = n;
    
    while (start <= end)
    {long  mid = start + (end - start) / 2;
      long long sq=mid*mid;
        if ( sq==n)
        {
            return mid;
        }
        if(sq<n)
        { ans =mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
double lastvalue_(int n,int pression,int value){
    double f=1;
    double ans =value;
    for (int i = 0; i < pression; i++)
    { f=f/10;
      for (double j = ans; j*j<n; j=j+f)
      {
       ans =j;
      } 
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int value=root_int_value(n);
  double ans= lastvalue_( n,7,value);
    cout<<ans<<endl;
}