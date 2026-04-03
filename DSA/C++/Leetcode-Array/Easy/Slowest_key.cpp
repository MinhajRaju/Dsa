#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



char slowestKey(std::vector<int>& releaseTimes , std::string keysPressed ){

    int n = releaseTimes.size();

    int maxDuration = releaseTimes[0];
    char  bestKey = keysPressed[0];


    for(int i  = 1 ; i < n ; i++){

        int currentDuration  = releaseTimes[i] - releaseTimes[i-1];
        char currentKey = keysPressed[i];


        if(currentDuration > maxDuration){
            maxDuration = currentDuration;
            bestKey = currentKey;
        }
        else if(currentDuration == maxDuration){
            if(currentKey > bestKey){
                bestKey = currentKey;
            }
        }
    }

    return bestKey;
}




int main(){

    std::vector<int> releaseTimes  = {9, 29, 49, 50};
    std::string keysPressed = "cbcd";

    std::cout << slowestKey(releaseTimes , keysPressed);

    return 0;
}