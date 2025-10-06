#include <iostream>
#include <vector>


void MoveZeroBruteForce(std::vector<int>& nums){

    int n = nums.size();

    for (int i  = 0 ; i < n ; i++ ){

        for (int j = i+ 1 ; j < n ; j++){
            if (nums[i]  == 0 ){
                int temp = nums[i];
                nums[i] = nums[j] ;
                nums[j] = temp;               
            }

        }
    }
    for (auto n : nums){
        std::cout << n << " ";
    }

}



void MoveZeroTwoPointer(std::vector<int>& nums){

    int n  = nums.size();

    int j  = 0;

    for (int i =0; i < n ; i++){
            if (nums[j]  == 0  && nums[i] != 0 ){
            int temp = nums[j];
            nums[j] = nums[i] ;
            nums[i] = temp; 
            j++;            
        }
        else if (nums[j] != 0) {
                j++;
            }
    }
 for (auto n : nums){
        std::cout << n << " ";
    }
}


int main(){

    std::vector<int> nums = {1,0,3,0 ,12};
    
    //MoveZeroBruteForce(nums);
    MoveZeroTwoPointer(nums);
    

    return 0;
}