#include <iostream>
#include <vector>


//Worng intutiaon 
bool isMonotonic(std::vector<int>& nums){

    int n = nums.size();

    int  j = 1;

    for (int i  = 0 ; i < n-1 ; i++){
        
        int diff = nums[j] - nums[i];

        if (1 < diff){
            return false;
        }
      
        if(i <= j && nums[i] <= nums[j] || diff == 1){
          
            j++;        
        }
        else if(i <= j && nums[i] >= nums[j] || diff == -1){
            j++;
        }
 


    }    
    if (n == j){
        return true;

    }
}


 //Right concpet 


 bool isMonotonic(std::vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}




int main(){
    std::vector<int> nums = {1,2,2,3};
    bool res = isMonotonic(nums);
    std::cout << res;
    return 0;   
}






