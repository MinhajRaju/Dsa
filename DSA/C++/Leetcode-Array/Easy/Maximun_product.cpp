#include <iostream>
#include <vector>
#include <algorithm>


void MaximunProduct(std::vector<int>& nums){


    sort(nums.begin() , nums.end());

    int n  = nums.size();


    int product1 = nums[n-1] * nums[n-2] * nums[n-3];
    int proudct2 = nums[n-1] * nums[0] * nums[1];


    int max = 0;

    if(product1 > max){
        max = product1;
    }if(product1 < proudct2){
        max = proudct2;

    }

    std::cout << max;


}



int  BruteForceMaximunProduct(std::vector<int>& nums){


    for(int i = 0; i < nums.size(); i++){

        if(nums[i] < 0){
            nums[i] = -nums[i];
            
        }
    }

    sort(nums.begin() , nums.end());
    int n  = nums.size();
    return nums[n-1] * nums[n-2] * nums[n-3];

}


int main(){






    std::vector<int> nums  = {-5, -1, 2, 3};
    //MaximunProduct(nums);
    int res = BruteForceMaximunProduct(nums);
    std::cout << res;
    return 0;
}