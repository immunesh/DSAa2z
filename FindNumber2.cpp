#include <iostream>
#include <chrono>

using namespace std;

int main() {

    auto startTime = chrono::high_resolution_clock::now();

    int x = 9999996;
    int n = 10000000;
    int count = 0;
    bool isEven = n % 2 == 0;

    if(x>=0){
        if(isEven){

            for(int i = 0; i <= n; i +=2){
                count++;
                if(i == x) {
                    cout << "We found the values at " << count << " try" <<endl;
                    break;

                }
            }
        } else {
            for(int i = 1; i < n; i += 2){
                count++;
                if (i == x){
                    cout << "We found the value at " << count << " try" <<endl;
                    break;

                }
            }

        }
    }else{
        cout << "We are expecting valid value";
    }
    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();

    cout << "Total time: " << duration << " ms" <<endl;

    return 0;

}
