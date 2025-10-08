#include <iostream>
#include <vector>


void keyboardRow(std::vector<std::string>& words ){

    int ws = words.size();

    std::vector<std::string> res;


    std::string firstrow  = "qwertyuiop";
    std::string secondrow = "asdfghjkl";
    std::string thirdrow  = "zxcvbnm";

    
    for(std::string w : words){

        if (w.empty()) continue;

        
        char first = tolower(w[0]);
        std::cout << first;
        int rowType = 0;

        if(firstrow.find(first) != std::string::npos) rowType = 1;
        else if (secondrow.find(first) != std::string::npos) rowType = 2;
        else if (thirdrow.find(first) != std::string::npos ) rowType = 3;

        bool ok = true;


        for (char c : w){
            c = tolower(c);
          

            if(rowType == 1 && firstrow.find(c) == std::string::npos) { ok = false; break; }
            if (rowType == 2 && secondrow.find(c) == std::string::npos) { ok = false; break; }
            if (rowType == 3 && thirdrow.find(c) == std::string::npos) { ok = false; break; }
        }

        if (ok) res.push_back(w);

    }


    //for (auto n : res) std::cout << n << " ";


}


int main(){

    std::vector<std::string> words = {"Hello","Alaska","Dad","Peace"};
    keyboardRow(words);

    return 0;
}