#include <iostream>
#include <vector>



std::vector<int> decode (std::vector<int>& nums , int first){

    std::vector<int> arr(nums.size()  +1);


    arr[0] = first;

    for(int i = 0; i < nums.size(); i++){

        arr[i+1] = arr[i] ^ nums[i];

    }

    return arr;


}



int main(){



    std::vector<int> nums = {1,2,3};
    int first = 1;

    std::vector<int> res = decode(nums , first);


    for(auto x :res){

        std::cout << x  <<" ";
    }
}