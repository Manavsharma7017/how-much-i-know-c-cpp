#include<iostream>
using namespace std;
int function(int n){
    if(n==0){
        return 1;
    }
    return n*function(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans =function(n);
    cout<<ans<<endl;
    return 0;
}