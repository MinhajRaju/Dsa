#include <iostream>
#include <vector>
#include <algorithm>



int LargestNumberAtLeastTwice(std::vector<int>& nums){

    int maxNum = nums[0];
    int index = 0;
  



    for(int i = 0 ;  i < nums.size(); i++){

        if(maxNum < nums[i]){
            maxNum = nums[i];
            index = i;
           
        }   
    }


    for (int i  = 0; i < nums.size() ; i++){

        if(nums[i] == maxNum ) continue;
        if( maxNum < 2* nums[i]){
            return -1;

    }
}
    return index;    
  


};



int main(){

    std::vector<int> nums = {3,6,1,0};
    int res = LargestNumberAtLeastTwice(nums);
    std::cout << res;

    return 0;
}