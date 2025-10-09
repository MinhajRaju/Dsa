#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <functional> 

void RelativeRank(std::vector<int>& score){

    int n = score.size();
    std::unordered_map<int , std::string> mp;

    sort(score.begin(), score.end(), std::greater<int>());

    for (int i=0; i < n; i++){

        if(i == 0 ){
            mp[score[i]] = "Gold Medal";
        }
        else if(i == 1){
            mp[score[i]] = "Bronze Medal";
        }
        else if(i == 2){
            mp[score[i]] = "Silver Medal";
        }else{
             mp[score[i]] = std::to_string(i+1);
        }
    }

    std::vector<int> score2 = {10,3,8,9,4};
    std::vector<std::string> res;
    for(auto v : score2){

        if(mp.find(v) != mp.end()){
            res.push_back(mp[v]);
        }
    }



    for (auto m : res) std::cout << m << " ";

}




int main(){

    std::vector<int> score = {10,3,8,9,4};
    RelativeRank(score);
    return 0;

}