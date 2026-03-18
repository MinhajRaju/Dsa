#include <iostream>
#include <vector>



int main(){ 

    std::vector<int> rounds = {8, 3, 1, 3};
    int n = 13;

    std::vector<int> result;
    int start =  rounds[0];
    int end = rounds[rounds.size()-1];

    if(start <= end){

        
        for(int i = start; i <= end; i++){
            result.push_back(i);
        }
    }else{
        for (int i = 1; i <= end; i++) { 
                result.push_back(i);
            }
        

        for(int i = start; i <=n; i++){
            result.push_back(i);
        }
    }



    for(auto x : result){

        std::cout << x;
    }


    return 0;
}