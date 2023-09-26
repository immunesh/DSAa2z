#include <iostream>

using namespace std;

int search(int array[], int size, int value) {
    for(int i = 0; i < size; i++) {
        if (array[i] == value){
            return i;
        }
    }
    return -1;
}

void deleteElement(int array[], int& size, int value) {
    int idv = search(array, size, value);
    if(idv >= 0) {
        for(int i = idv + 1; i < size; i++) {
            array[i - 1] = array[i];
        }
        size--;
    }
}

void printAllElement(const string& msg, int array[], int size) {
    cout << msg << ": ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void addElement( int array[], int& size, int position, int value) {
    if(size < 100000) {
        for (int i = size; i > position; i-- ) {
            array[i] = array[i - 1];
        }
        array[position] = value;
        size++;
    } else {
        cout << "Array is full, Cannot add more elements. " << endl;
    }
}


int main() {
    int arr[100000] = {1, 5, 2, 8, 7, 3};
    int size = 6;

    cout << arr[4] << endl;

    printAllElement("All Elements before adding ::", arr, size);
    addElement (arr, size, 4, 15);
    printAllElement("All Elements after adding ::", arr, size);

    cout << "-------------------------------------------------------" << endl;

    int index = search(arr, size, 15);
    if(index != -1) {
        cout << "Value found at index :: " << index << endl;

    } else {
        cout << "Value not found" << endl;
    }

    cout << "------------------------------------------------------" << endl;

    printAllElement("All Elements before delete ::", arr, size);
    deleteElement(arr, size, 7);
    printAllElement("All Elements after delete ::", arr, size);


    return 0;

}