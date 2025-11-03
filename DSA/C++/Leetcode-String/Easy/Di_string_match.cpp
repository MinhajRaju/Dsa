#include <iostream>
#include <vector>
#include <string>


void diStringMatch(std::string s){

    int n = s.size();

    int low = 0 ,  high =  n;

    std::vector<int> res;

    for(int i  = 0 ; i < n ; i++){
        
        int curr = (s[i] == 'I') ? 0 : 1 ;
        int next = (s[i+1] == 'I') ? 0 : 1;

        if(curr == 0){        
            res.push_back(low);
            low++; 
        }else{
            res.push_back(high);
            high--; 
        }

        
    }

    for (auto r : res)std::cout << r;

}






int main(){

 
    std::string s= "IDID";
    diStringMatch (s); 

    return 0;
}