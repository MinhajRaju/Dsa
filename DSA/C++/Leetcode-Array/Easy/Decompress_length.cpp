#include <iostream>
#include <vector>



std::vector<int> decompressList(std::vector<int>& nums){

   std::vector<int> ans;

   for(int i = 0; i < nums.size(); i += 2){
    int freq = nums[i];
    int val = nums[i+1];
    while (freq--){
        ans.push_back(val);
    }

   }

   return ans;
}

int main(){

    std::vector<int> nums = {1,2,3,4};
    std::vector<int> res = decompressList(nums);
    
    for(auto x  : res){
        std::cout << x << " ";
    }

    return 0;
}