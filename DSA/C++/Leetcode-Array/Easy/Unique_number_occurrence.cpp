#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>


void uniqueOccurrences(std::vector<int>& arr){

    std::unordered_map<int , int> mp;


    for(auto x : arr){
        mp[x]++;
    };



    std::unordered_set<int> seen;
    bool state  = true;

   for(auto x  : mp){

        if(seen.count(x.second)){
            state  = false;
        }

        seen.insert(x.second);

    }

    if(!state){
        std::cout << "NOT UNIQUE";
    }else{
        std::cout << "UNIQUE";
    }




}



int main(){


    std::vector<int> arr = {1,2,2,1,1,3};
    
    uniqueOccurrences(arr);


    return 0;
}