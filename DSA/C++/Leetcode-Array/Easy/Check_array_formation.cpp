#include  <iostream>
#include  <vector>
#include  <unordered_map>



bool canFromArray(std::vector<int>& arr , std::vector<std::vector<int>>& pieces){

    std::unordered_map<int , int> mp;


    for(int i = 0;  i < pieces.size(); i++){

        mp[pieces[i][0]] = i;
    }

    int i  = 0;

    while (i < arr.size()){
        if(mp.find(arr[i]) == mp.end()){
            return false;
        }

        int piecesIndex = mp[arr[i]];
        std::vector<int> targetPiece = pieces[piecesIndex];

        for(int val: targetPiece){

            if(arr[i] != val){
                return false;
            }
            i++;
        }
       
    }
     return true;

}




int main(){

    std::vector<int> arr = {91, 4, 64, 78};

    std::vector<std::vector<int>> pieces = {{78} , {4,64,} , {91}};

    std::cout << canFromArray(arr , pieces);

    return 0;

}