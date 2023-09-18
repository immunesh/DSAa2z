#include <iostream>
#include <chrono>

using namespace std;

int main() {
    auto startTime = chrono::high_resolution_clock::now();

    for (int i = 1; i < 10000000000; i++) {
        // No need to print each value, just keep the loop
    }

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();

    cout << "Total time: " << duration << " ms" << endl;

    return 0;
}
// Adding using namespace std; allows you to use cout and other elements from the std namespace without explicitly specifying std:: before each usage. Please note that while this makes the code shorter, it can lead to naming conflicts in larger programs, so use it judiciously.





