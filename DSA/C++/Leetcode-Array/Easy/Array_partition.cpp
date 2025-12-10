#include <iostream>
#include <vector>
#include <algorithm>

void ArrayPairSum(std::vector<int>& nums){
    //
    sort(nums.begin() , nums.end());
    int  sum = 0;
    for(int i = 0 ; i< nums.size() ; i+=2){
        std::cout << i;
        sum +=nums[i];
    }

    std::cout << sum;

}

int main(){

    std::vector<int> nums = {6,2,6,5,1,2};
    ArrayPairSum(nums);
    return 0;
}







