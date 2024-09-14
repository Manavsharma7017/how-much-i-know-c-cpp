#include<iostream>
#include<vector>
using namespace std;
    
    bool check(vector<int>& nums) {
        int count =0;
     for(int i=1;i<nums.size();i++){
         if(nums[i-1]>nums[i]){
             count++;
         }
     }
     if(nums[0]<nums[nums.size()-1]){
         count++;
     }
     if(count <=1){
         return true;
     }
     return false;
      
    }
     
int main(){
    vector<int>nums{1,2,3,4,5,6};
     bool ans=check(nums);
     cout<<ans<<endl;
     return 0;

} 
