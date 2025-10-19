#include <iostream>
#include <vector>
#include <list>

class Hashset{

private:
    std::vector<std::list<int>> bucket; 
    int size = 1000;
public:
    Hashset(){
        bucket.resize(size);
    };

    int hash(int key ){
        return key % size;
    }

    void add(int key){

        int i = hash(key);
        for(int x : bucket[i]){

            if(x == key) return ;
        }
        bucket[i].push_back(key);

    }


    bool remove(int key){

        int i  = hash(key);
        bucket[i].remove(key);
        if(bucket[i].empty()){
            return true;
        }
    }

    bool contains (int key){
        int i = hash(key);
        for(int x : bucket[i]){
            if(x == key) return true;
        }
        return false;
    }
    



};



int main(){

    Hashset hs;
    hs.add(1);
    hs.add(100);
    bool res = hs.contains(100);
    bool res2 =  hs.remove(100);
    bool res3 = hs.contains(100);
    std::cout << res << " " << res2 << " "  << res3;
    return 0;
}