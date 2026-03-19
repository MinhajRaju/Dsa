#include <iostream>
#include <vector>


bool  detechPattern(std::vector<int>& nums , int m  , int k){

    int n  = nums.size();

    for(int i = 0 ; i <= n-(m*k); i++){

       int count = 0;

       for (int j = 0; j < m*(k-1); j++){

        if(nums[i+j] == nums[i+j+m]){
            count++;
        }else{
            break;
        }

       }

       if(count == m*(k-1)){
        return true;
       }    

    }
    return false;

}



int main(){

    std::vector<int>  nums = {1,2,1,2,1,2};
    int m = 2 , k = 2;
    std::cout << (detechPattern(nums, m, k) ? "true" : "false") << std::endl; // Output: true
  

    return 0;
}