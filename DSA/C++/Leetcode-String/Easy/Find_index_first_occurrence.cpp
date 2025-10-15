#include <iostream>
#include <string>
#include <unordered_map>




int FirstOccurrence(std::string h  , std::string n){

 
    

    for(int i =0; i < h.size(); i++){
        int j = 0;
        for(; j <  n.size() ; j++){
            if(n[j] != h[i+j]) break; 
   
        }
      
        if (j == n.size()) return i;  
       

    }
  
   ;

    return -1;
      


};


int main(){
    std::string haystack = "taadbutsad";
    std::string needle = "sad";
    int res  = FirstOccurrence(haystack , needle);
    std::cout << res;
    return 0;
}