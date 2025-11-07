#include <iostream>
#include <vector>
#include <algorithm>


int sortedSquares(std::vector<int>& nums){

    

     std::vector<int> res(nums.size() , 0);

     for (int i = 0 ; i < nums.size() ; i++){

        res[i] = nums[i]* nums[i] ;    

     }

     sort(res.begin() , res.end());
     for (auto n :res) std::cout << n ;
}




int main(){

    std::vector<int> nums = {-4,-1,0,3,10};
    sortedSquares(nums);

    return 0;   
}




