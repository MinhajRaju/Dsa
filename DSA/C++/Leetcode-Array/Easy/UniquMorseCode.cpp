#include <unordered_map>
#include <vector>
#include <iostream>

void UniqueMorseCode(std::vector<std::string>& words){

   std::unordered_map<char , std::string> morseMap =  {
        {'a',".-"}, {'b',"-..."}, {'c',"-.-."}, {'d',"-.."}, {'e',"."},
        {'f',"..-."}, {'g',"--."}, {'h',"...."}, {'i',".."}, {'j',".---"},
        {'k',"-.-"}, {'l',".-.."}, {'m',"--"}, {'n',"-."}, {'o',"---"},
        {'p',".--."}, {'q',"--.-"}, {'r',".-."}, {'s',"..."},
        {'t',"-"}, {'u',"..-"}, {'v',"...-"}, {'w',".--"}, {'x',"-..-"},
        {'y',"-.---"}, {'z',"--.."}
    };


    std::unordered_map<std::string , bool> uniqueMorse; 


    for(auto word : words){

        std::string morse = "";

        for (auto c :  word ){

            morse += morseMap[c];
        }
        
        if(uniqueMorse.find(morse) == uniqueMorse.end()){

            uniqueMorse[morse] = true;
        }
    }

    std::cout << uniqueMorse.size();



}


int main(){

 
    std::vector<std::string> words = {"gin", "zen", "gig", "msg"};
    UniqueMorseCode(words);

    return 0;
}
