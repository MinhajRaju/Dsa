#include <iostream>
#include <vector>
#include <algorithm> // min function

using namespace std;

int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
    // start বড় হলে swap করে নেওয়া (forward sum calculation সহজ করার জন্য)
    if(start > destination) swap(start, destination);

    int total = 0;    // পুরো circular path-এর total distance
    int forward = 0;  // start → destination distance

    // total distance বের করা
    for(int d : distance) {
        total += d;
    }

    // forward distance বের করা
    for(int i = start; i < destination; i++) {
        forward += distance[i];
    }

    int backward = total - forward; // backward distance = remainder of circle

    return min(forward, backward); // ছোট distance return করা
}

int main() {
    vector<int> distance = {1, 2, 3, 4};
    int start = 0;
    int destination = 2;

    cout << "Minimum distance: " << distanceBetweenBusStops(distance, start, destination) << endl;

    return 0;
}
