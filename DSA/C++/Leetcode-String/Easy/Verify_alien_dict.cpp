#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool isAlienSorted(std::vector<std::string>& words , std::string order){

    std::unordered_map<char , int> mp;

    for(int i  = 0 ; i < order.size() ; i++){
        mp[order[i]] = i;
    }

    for (int i = 0; i < words.size() - 1; i++) {

        std::string word1 = words[i];
        std::string word2 = words[i + 1];

        bool isOrdered = false;

      
        for(int j = 0 ; j < std::min(word1.size(), word2.size()); j++) {

            char c1 = word1[j];
            char c2 = word2[j];

            if (c1 != c2) {
                if (mp[c1] > mp[c2]) {
                    return false;  
                } else {
                    isOrdered = true;  
                    break;
                }
            }
        }


        if (!isOrdered && word1.size() > word2.size()) {
            return false;
        }
    }

    return true; 
}

int main() {
    std::vector<std::string> words = {"word","world","row"};
    std::string order = "worldabcefghijkmnpqstuvxyz";

    bool res = isAlienSorted(words, order);
    std::cout << (res ? "true" : "false");
    return 0;
}