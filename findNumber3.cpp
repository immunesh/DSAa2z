
#include <iostream>
#include <chrono>

using namespace std;

int findNumber(int* collection, int size, int x) {
    int count = 0;

    int low = 0;
    int high = size - 1;
    while (low <= high){
        int mid = (low + high) / 2;
        if(collection[mid] == x) {
            return mid;
        } else if (collection[mid] > x) {
            high = mid - 1;
        } else {
            low =mid + 1;
        }
        count++;  
    }
    return -1;
}

int main() {

    int numColl[10000000];
    for(int i = 0; i < 10000000; i++) {
        numColl[i] = i;
    }

    int x = 9999996;

    auto startTime = chrono::system_clock::now();
    int index = findNumber(numColl, 10000000, x);

    auto endTime = chrono::system_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();

    cout << "We found the value at index " << index <<endl;
    cout << "Total Time " << duration << " milliseconds" <<endl;


}