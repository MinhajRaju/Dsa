#include <iostream>
#include <algorithm>
#include <vector>


std::vector<int> kWeakestRow(std::vector<std::vector<int>>& mat , int k){

    std::vector<std::pair<int , int>> v;


    int m = mat.size();
    int n = mat[0].size();

    for(int i = 0; i < m; i++){
        int count = 0;
        for(int j = 0; j < n ; j++){
            if(mat[i][j] == 1) count++;
            else break;
        }
        v.push_back({count , i});
    }
    sort(v.begin() , v.end());

    std::vector<int> ans;

    for(int i = 0; i<k; i++){
        ans.push_back(v[i].second);
    }
  return ans;
}



int main(){
  

    std::vector<std::vector<int>> mat = {{1,1,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,0,0,0},{1,1,1,1,1}};
    int k  = 3;
    std::vector res = kWeakestRow(mat , k);

    for(auto x : res){
        std::cout << x << " ";
    }

    return 0;
}