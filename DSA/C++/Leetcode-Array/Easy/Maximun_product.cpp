#include <iostream>
#include <vector>
#include <algorithm>


void MaximunProduct(std::vector<int>& nums){


    sort(nums.begin() , nums.end());

    int n  = nums.size();


    int product1 = nums[n-1] * nums[n-2] * nums[n-3];
    int proudct2 = nums[n-1] * nums[0] * nums[1];


    int max = 0;

    if(product1 > max){
        max = product1;
    }if(product1 < proudct2){
        max = proudct2;

    }

    std::cout << max;


}






int main(){
    std::vector<int> nums  = {-10, -10, 1, 2, 3};
    MaximunProduct(nums);
    return 0;
}