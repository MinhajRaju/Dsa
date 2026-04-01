#include <iostream>
#include <vector>

int SumOfOdd(std::vector<int>& nums){


    int n  = nums.size();
    int totalSum = 0;


    for(int i = 0 ; i < n ; i ++){

        int currnetSubArraySum = 0;
        for (int j  = i ; j < n ; j++){
            currnetSubArraySum += nums[j];
            int length = j-i+1;

            if (length % 2 != 0){
                totalSum += currnetSubArraySum;
            }
        }


    }


    return  totalSum;

}




int main(){
    //

    std::vector<int> nums = {1, 4, 2, 5, 3};



    std::cout  << SumOfOdd(nums);


    return 0;
}