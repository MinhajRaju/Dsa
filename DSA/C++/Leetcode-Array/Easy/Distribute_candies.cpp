#include <iostream>
#include <vector>
#include <unordered_map>



void DistributeCandies(std::vector<int>& candyType ){

    int n = candyType.size();
    int rule = candyType.size() / 2;
    std::unordered_map<int , int> mp;
    mp.reserve(rule);


    for(int i =0 ; i < n ; i++){

        if(mp.find(candyType[i]) == mp.end()){
            mp[candyType[i]]++;
        }
    }

    std::cout << mp.size();

}




int main (){

    std::vector<int> candyType  = {6,6,6,6,6};
    DistributeCandies(candyType );

    return 0;
}