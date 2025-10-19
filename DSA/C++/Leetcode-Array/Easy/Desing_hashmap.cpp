#include <iostream>
#include <vector>
#include <unordered_map>


class HashMap{
private:
    std::unordered_map<int,int> mp;
public:

    HashMap(){
    }

    void put(int key , int value){
        mp[key] = value;
    }

    int get(int key){
        auto it = mp.find(key);
        if (it != mp.end()) return it->second;
        return -1;
    }

    void remove(int key){
        mp.erase(key);
    }


};




int main() {
    HashMap myMap;

    myMap.put(1, 10);
    myMap.put(2, 20);
    std::cout << myMap.get(1) << std::endl; // output: 10
    std::cout << myMap.get(3) << std::endl; // output: -1

    myMap.put(2, 30);
    std::cout << myMap.get(2) << std::endl; // output: 30

    myMap.remove(2);
    std::cout << myMap.get(2) << std::endl; // output: -1

    return 0;
}