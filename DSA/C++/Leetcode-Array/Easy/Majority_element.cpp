#include <iostream>
#include <vector>
#include <unordered_map>



void MajorityElementBruteForce(std::vector<int>& nums ){

    int n = nums.size();
    for(int i = 0 ; i < n; i++){
        int count = 0;      
        for (int j=0 ; j < n; j++){
            if (nums[i] == nums[j]){
                count++;
            }
        }
        if(count> n/2){

            std::cout << nums[i];
        }
    }
}   

/*The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/

 

void MajorityElementHasMap(std::vector<int>& nums){

    std::unordered_map<int , int > mp;

    int n = nums.size();

    for (int v: nums ){
        mp[v]++;

        if (mp[v] > n/2){
            std::cout << v;
        }
    }


    for (auto p : mp) std::cout <<  "key " << p.first << " value" << p.second << std::endl;


}


//Boyer–Moore Voting Algorithm

void MajorityElementBMVA(std::vector<int>& nums){

    int  count = 0;
    int  candidate = 0;

    for(int num : nums){

        if(count == 0){
            candidate = num;
        }

        if(num == candidate){
            count++;
        }else{
            count--;
        }
    }
    std::cout << candidate;

}




int main(){

    std::vector<int> nums  = {3,1,3,1,1 ,3 ,3};
    //MajorityElementBruteForce(nums);
    //MajorityElementHasMap(nums);
    MajorityElementBMVA(nums);

    return 0;
}