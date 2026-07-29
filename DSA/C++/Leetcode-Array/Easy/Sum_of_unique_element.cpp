#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



int sumOfunique(vector<int>& nums){


    unordered_map<int  , int> mp;

    for(auto x : nums){

        mp[x]++;
    }

   int sum = 0;

   for(auto it : mp){

    if(it.second ==1){
        sum += it.first;
    }
   }

   return sum;
    

}


int main(){

    vector<int> nums = {1,2,3,2};
    int res = sumOfunique(nums);

    cout << res;

    return 0;

}