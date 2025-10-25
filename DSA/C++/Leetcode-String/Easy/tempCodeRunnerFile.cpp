#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stack>

void ShortestCompletingWord(std::vector<std::string>& words , std::string licensePlate){

    std::stack<char> lp;

    for (auto c : licensePlate){

        if (std::isdigit(static_cast<unsigned char>(c)) || c == ' ' ){
        continue;
        }         
        lp.push(tolower(c));
    }

 

    std::string index ;

    for (int i = 0 ; i < words.size() ; i++){   
         std:: stack<char> temp = lp;
        for (int j = 0 ; j < words[i].size(); j++){


            if(!temp.empty()  && temp.top() == std::tolower(words[i][j]) ){
                temp.pop();
            }  

            if(temp.empty()){
                index = words[i];
                break;
                
            }

          
        }
        
    }

    std::cout << index;

   




}




int main(){

    std::string licensePlate  = "1s3 PSt";
    std::vector<std::string> words = {"step","steps","stripe","stepple"};
    ShortestCompletingWord(words , licensePlate);
    return 0;

}


