#include <iostream>
#include <vector>



int addToArrayForm(std::vector<int>& nums , int k ){

    int sum = 0;



    for (int d :nums){
        sum = sum * 10+ d;
    }
    

    int res = sum + k;

    std::string res_str = std::to_string(res);
    std::vector<int> store;

    for(char digit : res_str){
        store.push_back(digit - '0');
    }



    for (auto n : store) std::cout << n;

}


/*

 int i = nums.size() - 1;
    vector<int> res;

    while (i >= 0 || k > 0) {
        if (i >= 0) {
            k += nums[i];
            i--;
        }
        res.push_back(k % 10);
        k /= 10;
    }

    reverse(res.begin(), res.end());
    return res;
*/



int main(){


    std::vector<int> nums = {1,2,0,0};
    int k = 34;

    addToArrayForm(nums , k);



    return 0;
}