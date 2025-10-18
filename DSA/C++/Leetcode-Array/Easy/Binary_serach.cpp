#include <iostream>
#include <vector>


int  BinarySearch(std::vector<int>& nums){
    int l = 0;
    int r = nums.size();




    while (l <= r ){

        int mid = (l + r) / 2 ;
        

        if(nums[mid] == 9 ){
           return mid;
       

        }
        else if (nums[mid] < 9){
            l  = mid+ 1;
        }
        else{
            r  = mid-1;
        }

    }

    return -1;



}


int main(){

    std::vector<int> nums = {-1,0,3,5,9,12};
    int res = BinarySearch(nums);
    std::cout << res;

    return 0;
} 