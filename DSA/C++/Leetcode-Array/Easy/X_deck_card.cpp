#include <iostream>
#include <vector>
#include <unordered_map>

//wrong approch 
bool  hasGroupsSizeX(std::vector<int>& deck){

    if(deck.empty()) return false;

    std::unordered_map<int , int> mp;

    int count = 0;

    for(int  i = 0; i < deck.size(); i++ ){

     mp[deck[i]]++;
        
    }

    auto it  = mp.begin();


    for(auto x  : mp){


        if(it->second != x.second){
            return false;
        }

       
     }


     return true;    


}


//Right approch 

// Iterative GCD
int myGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool hasGroupsSizeX(std::vector<int>& deck) {
    if(deck.empty()) return false;

    std::unordered_map<int, int> freq;

    // Frequency count
    for(int i = 0; i < deck.size(); i++){
        freq[deck[i]]++;
    }

    int gcdVal = 0;
    for(auto x : freq){
        if(gcdVal == 0) gcdVal = x.second;
        else gcdVal = myGCD(gcdVal, x.second);
    }

    return gcdVal >= 2;
}





int main(){

    std::vector<int> deck = { 1,2,3,4,4,3,2,1 ,1}; 
    bool res = hasGroupsSizeX(deck);
    std::cout  << res;

;    return 0;
}