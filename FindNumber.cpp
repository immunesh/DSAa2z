#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    auto startTime = chrono::high_resolution_clock::now();

    int x = 9999996;
    int m = 10000000;

    int count = 0;

    for(int i =1; i<= m; i++){
        count++;
        if(i == x){
            cout << "We found the value at " << count << " try " <<'\n';
            break;
        }
            
    }
    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();

    cout << "Total time: " << duration << " ms" <<'\n';

    return 0;
}