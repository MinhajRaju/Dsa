#include <iostream>
#include <vector>


void sortArrayByParity(std::vector<int>& nums){


    int n = nums.size();
    std::vector<int> res(n , 0);

    int left = 0;
    int right = n - 1;

    

    for(int i  = 0  ; i  < n ; i++){


        if(nums[i] % 2 != 0){
            res[right] = nums[i];
            right--;
        }else{
            res[left] = nums[i];
            left++;
        }

        

    }


    for (auto n : res) std::cout << n << " ";
     




    





}







int main(){

    std::vector<int> nums = {3,1,2,4};
    sortArrayByParity(nums);

    return 0;

}