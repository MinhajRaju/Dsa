#include <iostream>
#include <vector>
#include <algorithm>

void largestSumAfterKNegations(std::vector<int>& nums , int k){

    sort(nums.begin() , nums.end());

    //done
    for (int i = 0; i < nums.size() && k > 0  ; i++){

        if(nums[i] < 0){
            std::cout << " in";
            nums[i] = -nums[i];
            k--;
        }
    }

    sort(nums.begin() , nums.end());

    
    if(k % 2 == 1){
        nums[0] = -nums[0];
    }


    int sum = 0;
    for(int  x : nums) sum +=x;

    std::cout << sum;
    
    //for(auto n : nums)std::cout << n;


}



int main(){

    std::vector<int> nums = {2,-3,-1,5,-4};
    int k = 1;

    largestSumAfterKNegations(nums , k);



    return 0;
}