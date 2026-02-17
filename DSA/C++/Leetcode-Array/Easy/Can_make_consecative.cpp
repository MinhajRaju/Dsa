#include <iostream>
#include  <vector>
#include <algorithm>



bool canMakeArithmeticProgression(std::vector<int>& nums){

    sort(nums.begin() , nums.end());


    int  diff = nums[1] -  nums[0];

    for (int  i = 2; i < nums.size() ; i++){

        if(nums[i] - nums[i-1] != diff){
            return false;
        }
    }

    return true;
}   



int main(){

    std::vector<int> nums = {3,2,1};

    bool res =  canMakeArithmeticProgression(nums);

    std::cout << res;




    return 0;
}