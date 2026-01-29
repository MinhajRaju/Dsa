#include <iostream>
#include <vector>


std::vector<int> finalPrice(std::vector<int>& nums){

    std::vector<int> ans = nums;

    int n  = nums.size();

    for (int i = 0 ; i < n; i++){


        for(int j = i+1 ; j < n ; j++){


            if(nums[i] >= nums[j]){
                ans[i] = (nums[i] - nums[j]);
                
                break;
            }
        }
    }
return ans;
}




int main(){

    std::vector<int> nums = {8,4,6,2,3};
    std::vector<int> res  = finalPrice(nums);

    for (auto x : res){
        std::cout  << x ;
    }


}