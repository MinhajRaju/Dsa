#include <iostream>
#include <vector>


bool Bits(std::vector<int>& bits){
    //
    int n = bits.size();

    int i = 0;

    while( i < n -1){
        if(bits[i] == 1)  i +=2;
        else i +=1;
    }
    return i == n-1;
    

  


};




int main(){
    /
    std::vector<int> bits = {1,1,1,0};
    
    bool res = Bits(bits);
    std::cout << res;
    return 0;



}