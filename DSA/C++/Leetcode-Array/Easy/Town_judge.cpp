#include <iostream>
#include <vector>
#include <unordered_map>





int findJudge(int n, std::vector<std::vector<int>>& trust) {
       std::unordered_map<int,int> mp;

    for (auto &t : trust) {
        int a = t[0];
        int b = t[1];

        
        mp[a] = -1;

       
        if (mp[b] != -1) {
            mp[b] += 1;
        }
    }

    for (int i = 1; i <= n; i++) {
       
        if (mp[i] == n-1) return i;
    }

    
    return -1; 
    }



int main(){


    std::vector<std::vector<int>> trust = {{1,2}};
    int n  = 2; 
    int res = findJudge( n  , trust);
    std::cout << res;
    return 0;
}
