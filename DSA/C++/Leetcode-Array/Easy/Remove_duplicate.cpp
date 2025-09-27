#include <iostream>
#include <vector>
#include <string>




void RemoveDuplicate(std::vector<int>& nums){

    int n = nums.size();

    for(int i =0;  i < n; i++){

        for (int j =i+1; j < n ; j++){
          if (nums[i] == nums[j]) {

            // shift left
            for (int k = j ; k < n -1; k++){

                nums[k ]  = nums[k+1];

            
            }    
           
            n--;// logical size কমানো
            j--;// নতুন value check করার জন্য
            for (auto num : nums) std::cout << num << " ";
            std::cout << "N vaue " << n  << " " << j <<std::endl ;
        }  
    
    }
  
  
    
        
    }
}


void RemoveDuplicateTwopointer(std::vector<int>& nums){


    int pointer = 0;
    int n = nums.size();
    for(int i = 1; i < n; i++){

        if(nums[i] != nums[pointer]){
            pointer++; 
            nums[pointer] = nums[i];         
            
        }
        
    }
    std::cout <<  pointer+1 << " ";  
    for (auto num : nums) std::cout << num; 
}


int main(){

    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    //RemoveDuplicate(nums);
    RemoveDuplicateTwopointer(nums);
    
    
    return 0;



}