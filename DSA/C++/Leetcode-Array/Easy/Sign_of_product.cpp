#include <iostream>
#include <vector>



int arraySign(std::vector<int> nums){


    int sign = 1;

    for (int i  = 0; i  < nums.size() ; i++){

        if(nums[i] == 0){
            return 0;
        }
        
        if (nums[i] < 0 ){

            sign = -sign;
        }

        
    }
    return sign;

}



int main(){


    std::vector<int> a  = {-1, -2, -3, -4, 3, 2, 1};

    int res =  arraySign(a);

    std::cout << res;


    return 0;



}
