
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cctype>


std::string shortestCompletingWord(const std::string& licensePlate, const std::vector<std::string>& words){
    
    std::unordered_map<char , int > need;

    for (char c : licensePlate){

        if(isalpha(c)){
            need[tolower(c)]++;
        }
    }

    std::string ans =  "";


    for(std::string word : words){
        std::unordered_map<char , int> freq;

        for(char c : word){
            freq[tolower(c)]++;
        }

        bool ok = true;

        for(auto [ch ,cnt] :need){
            if(freq[ch] < cnt){
                ok =false;
                break;
            }
        }

        if(ok){

            if(ans == "" || word.size() < ans.size()){
                ans = word;
            }
        }


    }

    return ans;


}



int main(){

    std::string licensePlate = "1s3 PSt";

    std::vector<std::string> words = { "step", "steps", "stripe", "stepple" };
    std::string result = shortestCompletingWord(licensePlate, words);
    std::cout << result << std::endl;

    return  0;
}
