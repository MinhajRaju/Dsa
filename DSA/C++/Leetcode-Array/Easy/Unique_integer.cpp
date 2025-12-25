#include <iostream>
#include <vector>

std::vector<int> uniqueIntegerSum(int n){


    std::vector<int> ans;

    if(n % 2 == 1){
        ans.push_back(0);
    }
    
    int x  = 1;

    while(ans.size() < n){
        ans.push_back(x);
        ans.push_back(-x);
        x++;
    }

    return ans;


}


int main(){
    
    std::vector<int> res = uniqueIntegerSum(7);
    for(auto x :res){
        std::cout << x << " ";
    }


    return 0;
}