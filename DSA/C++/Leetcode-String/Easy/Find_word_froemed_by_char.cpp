#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cctype>




void countCharacters(std::vector<std::string>& words  , std::string chars){

    int ws = words.size();

    int count  = 0;

    for(int i=0; i < ws ; i++){

        std::string w  = words[i];

        bool ok  = true;

        for(int j = 0 ; j < w.size() ; j++){

            char c = tolower(w[j]);

            if(chars.find(c) == std::string::npos){

                ok  = false;
                break;
            }
        }

        if (ok) count += w.size();


    }

    std::cout << count;


}

//Leetcode accpetd 
void countCharacters(std::vector<std::string>& words, std::string chars){

    int ws = words.size();
    int count  = 0;

    // chars এর frequency বের করি
    std::unordered_map<char,int> freq;
    for(char c : chars) freq[tolower(c)]++;

    for(int i=0; i < ws ; i++){

        std::string w  = words[i];

        bool ok  = true;

        // temp frequency copy (প্রতিটি word এর জন্য)
        std::unordered_map<char,int> temp = freq;

        for(int j = 0 ; j < w.size() ; j++){

            char c = tolower(w[j]);

            // frequency check
            if(temp[c] > 0){
                temp[c]--;
            } else {
                ok = false;
                break;
            }
        }

        if (ok) count += w.size();
    }

    std::cout << count;
}


int main(){

    std::vector<std::string> words = {"cat","bt","hat","tree" };
    std::string chars = "atach";
    countCharacters(words , chars);
    

    return 0;
}