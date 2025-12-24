#include <iostream>
#include <vector>


void findNumber(std::vector<int>& nums){

   int n  = nums.size();
   int evenCount  = 0;

   for(int i = 0; i < n; i++){

    int num  = nums[i];
    int digitCount = 0;

    while (num > 0){
        num = num / 10;
        digitCount++;    
    }

    if(digitCount % 2 == 0 ){
        evenCount++;
    }
   }

   std::cout<< evenCount;




}


int main(){

    std::vector<int> nums = {12,345,2,6,7896};
    findNumber(nums);
    return 0;
}