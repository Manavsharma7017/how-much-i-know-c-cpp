#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>arr1={1,4,5,6};
    vector<int>arr2={3,7};

   for(auto i:arr2){
		arr1.push_back(i);
	}
	 sort(arr1.begin(), arr1.end());

     for (auto i:arr1)
     {
        cout<<i<<endl;
     }
     return 0;
     
}