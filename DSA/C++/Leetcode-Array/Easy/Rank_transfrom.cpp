#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>


std::vector<int> rankTransfrom(std::vector<int>& arr){

    int n  = arr.size();

    std::vector<int> temp = arr;


    sort(temp.begin() ,  temp.end());

    std::unordered_map<int , int> mp;

    int rank = 1;

    for(int i = 0; i < n ;i++){
        if(mp.find(temp[i]) == mp.end()){
            mp[temp[i]] = rank;
            rank++;
        }
    }

    for(int i = 0; i < n ;i++){
        arr[i] = mp[arr[i]];
    }

    return arr;

          

}


int main(){
    
     std::vector arr = {100,100,50};
     std::vector res = rankTransfrom(arr);
     

     for(auto x  : res){
        std::cout << x << " ";
     }

    return 0;
}