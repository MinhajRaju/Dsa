#include <iostream>
#include <vector>
#include <string>



std::string restoreString(std::string s, std::vector<int>& indices ){

    int n  = s.size();

    std::string res = s;


    for(int i=0; i < n; i++){
        res[indices[i]] = s[i];
    }

    std::cout << res;
    

    return "";


}





int main(){

    std::string s  = "codeleet";
    std::vector<int> indices ={4, 5, 6, 7, 0, 2, 1, 3};

    std::string result = restoreString(s , indices);


}