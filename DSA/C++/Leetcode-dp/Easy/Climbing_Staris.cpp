#include <iostream>
#include <vector>



int  ClimbingStrais(int n){

    if (n <= 2) return n;

    std::vector<int> dp(n+1);


    dp[1] = 1;
    dp[2] = 2;

    for(int i  = 3; i <= n; i++){

        dp[i] = dp[i-1] + dp[i-2];
    }

    

    for(auto d : dp) std::cout  << d;
    return dp[n];

};


int main(){

   

    int res  = ClimbingStrais(5);

    std::cout << res;

    return 0;
}