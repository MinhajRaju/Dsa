#include <iostream>
#include <vector>


void numEquivDominoPairsBrute(std::vector<std::vector<int>>& dominoes ){

    int n  = dominoes.size();

    int count  = 0;
    for (int  i = 0 ; i < n ; i++){


        int a  = dominoes[i][0];
        int b =  dominoes[i][1];

        for(int j = i+1; j < n; j++ ){
            int c  = dominoes[j][0];
            int d =  dominoes[j][1];
            if(  (a == c && b == d) || (a == d && b == c)  ){
                    count++;
            }
            
        }
    }
    std::cout << count;

}





int main(){

    std::vector<std::vector<int>>  dominoes  = {{1,2} , {2,1} , {3,4} , {5,6}}; 
    numEquivDominoPairsBrute(dominoes);
    return 0;
}