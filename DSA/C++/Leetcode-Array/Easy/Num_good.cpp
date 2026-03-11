#include <iostream>
#include <vector>



int numberOfPairs(std::vector<int> nums){
    int count = 0;
    int n = nums.size();


    for(int i = 0; i < n ; i++){

        for(int j  = i+1 ; j < n; j++){


            if(nums[i] == nums[j] && i < j ){
                count++;
            }
        }

    }

    return count;

}


int main(){

    std::vector<int> nums = {1,2,3,1,1,3};
    
    int res = numberOfPairs(nums);
    std::cout << res;


    return 0;



}