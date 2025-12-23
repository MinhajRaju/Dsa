#include <iostream>
#include <vector>
#include <unordered_map>


int findSpecialInteger(std::vector<int>& arr){
  
    int n  = arr.size();
    int limit = n /4;

    std::unordered_map<int , int> mp;


    for(int x : arr){
        mp[x]++;
    }

    for(auto it : mp){
        if(it.second > limit){
            return  it.first;
        }
    }
    return -1;
}


int main(){

    std::vector<int> arr = {1,2,2,6,6,6,6,7,10};
    int res = findSpecialInteger(arr);

    std::cout << res;

    return 0;
}