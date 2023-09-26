#include <iostream>
#include <vector>

using namespace std;

class Array {
public:
    int search(vector<int>& array, int value) {
        int loc = -1; // Initialize loc to -1
        for (int i = 0; i < array.size(); i++) {
            if (array[i] == value) {
                loc = i;
                break;
            }
        }
        return loc;
    }

    vector<int> deleteElement(vector<int>& array, int value) {
        int loc = search(array, value);
        if (loc >= 0) {
            for (int i = loc + 1; i < array.size(); i++) {
                array[i - 1] = array[i];
            }
            array.pop_back();
        }
        return array;
    }

    void printAllElement(const string& msg, vector<int>& arr) {
        cout << msg;
        for (int i = 0; i < arr.size(); i++) {
            cout << " " << arr[i];
        }
        cout << endl;
    }

    vector<int> addElement(vector<int>& array, int position, int value) {
        vector<int> result;
        for (int i = 0; i < position; i++) {
            result.push_back(array[i]);
        }
        result.push_back(value);
        for (int i = position; i < array.size(); i++) {
            result.push_back(array[i]);
        }
        return result;
    }
};

int main() {
    vector<int> arr = {1, 5, 2, 8, 7, 3};
    cout << arr[3] << endl;

    Array array;

    // Adding a new element to the array
    array.printAllElement("All Element before adding :: ", arr);
    arr = array.addElement(arr, 4, 15);
    array.printAllElement("All Element after adding :: ", arr);
    cout << "----------------------------------------------" << endl;

    // Search for an element in the array
    int index = array.search(arr, 100);
    cout << "Value found at :: " << index << endl;
    cout << "----------------------------------------------" << endl;

    // Delete an element from the array
    array.printAllElement("All Element before delete :: ", arr);
    arr = array.deleteElement(arr, 7);
    array.printAllElement("All Element after delete :: ", arr);

    return 0;
}
