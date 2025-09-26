#include <iostream>
#include <vector>
#include <string>



void LongestCommonPrefixBruteForce(std::vector<std::string>& strs){

    if (strs.empty()) std::cout << "";

    std::string prefix   = "";

    for (int i = 0 ; i < strs[0].size(); i++){
        char c = strs[0][i]; 
        for (int j = 1 ; j < strs.size(); j++){            
            if(i >= strs[j].size() || strs[j][i] !=c ){               
                goto end;
            }
        }
        prefix += c;

    }
    end:
        std::cout << prefix;
}




void LongestCommonPrefix(std::vector<std::string>& strs){

    if (strs.empty()) std:: cout << "Enmty";


    std::string prefix  = strs[0];
   
    for (int i = 1 ; i < strs.size(); i++){
        int j = 0;

        std::cout << j << std::endl;
        
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]){
            j++;
        }
        
       std::string newPrefix = "";
       std::cout << j << std::endl;
       for(int k = 0 ; k < j; k++){
        
        newPrefix += prefix[k];
       }

       
       prefix = newPrefix;

    }

    std::cout << prefix;


}



int main(){


  std::vector<std::string> strs = {"flower" , "flow" , "flight"};
  //LongestCommonPrefix(strs);
  LongestCommonPrefixBruteForce(strs);

}