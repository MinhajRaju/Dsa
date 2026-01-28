#include <iostream>
#include <vector>



std::vector<int> shuffle(std::vector<int> nums , int n){


    std::vector<int> result;


    for(int i =0 ; i < n  ; i++){

        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
    }

    return result;

}





int main(){

    std::vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    std::vector res = shuffle(nums , n);

    for(auto x :res ){

        std::cout << x ;
    }


}