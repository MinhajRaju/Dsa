#include <iostream>
#include <vector>
#include <string>




void RemoveElement(std::vector<int>& nums , int val){

    int n  = nums.size();    
    for(int i = 0; i < n; i++){
       if(nums[i] == val){
            for (int j = i; j< n-1; j++){
                std::cout << j << " ";               
                    nums[j] = nums[j+1];          
          } 
          n--;
          i--; 
          
        }

    }
    for(auto arr: nums) std::cout << arr;
    


}


void RemoveElementTwoPointer(std::vector<int>& nums , int val){

    int n = nums.size();
    int pointer  = 0;

    for(int i=0; i < n; i++){

        if(nums[i] != val){
           nums[pointer] = nums[i];
           pointer++; 
        }

       
        
      
    }

    for(auto arr: nums) std::cout << arr;


}



int main(){

    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    //RemoveElement(nums , val);
    RemoveElementTwoPointer(nums ,val);


    return 0;
}