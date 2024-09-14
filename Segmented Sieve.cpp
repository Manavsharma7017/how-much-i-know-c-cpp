#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void sieve(vector<int> &prime,int r){
    int sr=sqrt(r);
      vector<bool> mark(sr + 1, true);
 
    for (int p=2; p<=sr; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            for (int i=p*p; i<sr; i+=p)
             mark[i] = false;
        }
    }
}
void segmentedSieve(int l,int r){
    vector<int>prime;
    sieve(prime,r);
    vector<bool>isprime(r-l+1,true);
    for (int p : prime){
     
      // Choosing the first multiple of p >= low
      int s = l/ p * p;
      if (s < l)
      {
          s += p;
      }
       
      // Cancelling out the factors of p
      for (int i = s; i <= r; i += p)
      {
          isprime[i - l] = false;
          
          
      }
  }

  for (size_t i = l; i <=r; i++)
  {
   if(isprime[i-l]){
    cout<<i<<endl;

   }
  }
  
    
}
int main()
{   int l,r;
    cout<<"enter loer and upper limit"<<endl;
    cin>>l>>r; 
    cout << "Primes smaller than " << l<<"and"<<r<< ":\n";
    segmentedSieve(l,r);
    return 0;
} 
