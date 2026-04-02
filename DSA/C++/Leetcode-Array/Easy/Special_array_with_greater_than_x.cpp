#include <iostream>
#include <vector>



int findSpecialNumber(std::vector<int>& nums){
    
    int  n = nums.size();


    for(int i = 0 ; i < n ; i++){

        int count =  0;


        for (int j = 0; j < n; j++){


            if(nums[j] >= i) {
                count++;
            }

        }

        if(count == i){
            return i;
        }  

    }

    return -1;



}





int main(){

    std::vector<int> nums = {0, 4, 3, 0, 4};

    std::cout << findSpecialNumber(nums);

    return 0;
}