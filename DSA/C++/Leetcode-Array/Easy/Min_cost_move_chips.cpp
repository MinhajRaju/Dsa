#include <iostream>
#include <vector>


void minChips(std::vector<int>& chips ){

    int n  = chips.size();

    int odd_count = 0  , even_count = 0;


    for(int i = 0; i < n ; i++){

        if(chips[i] % 2 == 0){
            even_count++;
        }else{
            odd_count++;
        }

    }

    if(odd_count > even_count){
        std::cout << even_count;
    }else{
        std::cout << odd_count;
    }




}


int main(){

    std::vector<int> chips = {1,2,3};
    minChips(chips);

    return 0;



}