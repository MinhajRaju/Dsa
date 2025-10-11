#include <iostream>
#include <string>
#include <unordered_map>

void RomanToInteger(std::string s){

    static const std::unordered_map<char , int> mp = {

        {'I', 1},    
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}

    };


    int  sum = 0;

    for(int i = 0 ; i < s.size(); i++){

        if(i+1 < s.size() && mp.at(s[i]) < mp.at(s[i + 1])){
            sum -=  mp.at(s[i]);
        }else{
            sum += mp.at(s[i]); 
        }

       
    }


    std::cout << sum;
}



int main(){ 
    std::string s = "IV";
    RomanToInteger(s);
    return 0;
}