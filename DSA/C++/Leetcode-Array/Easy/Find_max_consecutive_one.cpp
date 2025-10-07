#include <iostream>
#include <vector>



void MaxConsecutiveOne(std::vector<int>& nums){

    int n  = nums.size();
  

    int i = 0;
    int count = 0;
    int max = 0;
    while(i < n ){

      
        if(nums[i] != 0){
            count++;
        }else{
            count = 0;
        }

        if(max < count){
            max = count;
        }
        
        i++;
    


    }
    std::cout << max;    


}


int main(){

    std::vector<int> nums = {1,0,0,0,0};

    MaxConsecutiveOne(nums);


    return 0;
}