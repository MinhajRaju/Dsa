#include <iostream>

int findPoisonedDuration(int timeSeries[], int n, int duration) {
    if(n == 0) return 0;

    int totalTime = 0;
    int prevEnd = 0;

    for(int i = 0; i < n; i++){
        int t = timeSeries[i];

        if(i == 0 || t >= prevEnd){
            totalTime += duration;          // no overlap
        } else {
            totalTime += (t + duration - prevEnd); // overlap part only
        }

        prevEnd = t + duration;

      
    }

    return totalTime;
}


int main(){
    int timeSeries[] = {1,2 ,3, 4};
    int n = 4;
    int duration = 1;

    int result = findPoisonedDuration(timeSeries, n, duration);
    std::cout << "Final Poisoned Duration = " << result << std::endl;

    return 0;
}
