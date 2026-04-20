#include <iostream>
#include <vector>


bool CheckArray(std::vector<std::string>& word1 , std::vector<std::string>& word2){

    std::string w1 = "";
    std::string w2 = "";


    for(int i = 0 ;  i < word1.size(); i++){

        w1 += word1[i];

    }

       for(int i = 0 ;  i < word2.size(); i++){

        w2 += word2[i];

    }



    if (w1 == w2){
        return true;
    }

    return false;

}


int main(){

    std::vector<std::string> word1 = {"ab" ,  "c"} , word2 = {"a" , "b4"};

    std::cout << CheckArray(word1 , word2);


    return 0;
}