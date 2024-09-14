#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>nums{1,2,3,4,5,6,7};
    int k=3;
    vector<int>ans(nums.size());
    for (size_t i = 0; i < nums.size(); i++)
    {
        ans[(i+k)%nums.size()]=nums[i];
    }
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    
}//or
/*class Solution {
public:
    void rotate(vector<int>& nums,int start,int end){    
        while(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
         if(k>nums.size())
        k=k%nums.size();
         rotate(nums,0,nums.size()-1);
         rotate(nums,k,nums.size()-1);
         rotate(nums,0,k-1);

    };
};*/
