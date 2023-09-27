#include <iostream>

using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLS = 4;

void initializeArray(int arr[][MAX_COLS]) {
    int counter = 1;
    for (int i = 0; i < MAX_ROWS; i++ ) {
        for (int j = 0; j < MAX_COLS; j++) {
            arr[i][j] == counter;
            counter++;
        }
    }
}

void printArray(int arr[][MAX_COLS], int rows, int cols) {
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}


void addElement(int arr[][MAX_COLS], int& rows, int& cols, int row, int col, int value){
    if(rows < MAX_ROWS && cols < MAX_COLS) {
        arr[row][col] = value;
        rows++;
        cols++;
    } else {
        cout << "Cannot add more elements. Array is full." << endl;
    }

}

void deleteElement(int arr[][MAX_COLS], int& rows, int& cols, int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < cols){
        for(int i = row; i < rows - 1; i++){
            for(int j = col; j < cols - 1; j++) {
            arr[i][j] == arr[i + 1][j +1];
        }
    }
    rows--;
    cols--;
} else {
    cout << "Invalid position. Cannot delete element." << endl;
}
}


int main(){
    int myArray[MAX_ROWS][MAX_COLS];
    int numRows = 0;
    int numCols = 0;

    initializeArray(myArray);

    numRows = MAX_ROWS;
    numCols = MAX_COLS;

    cout << "2D Array:" << endl;
    printArray(myArray, numRows, numCols);

    int newRow = 2;
    int newCol = 3;
    int newValue = 42;

    addElement(myArray, numRows, numCols, newRow, newCol, newValue);

    cout << "2D Array after adding element:" << endl;
    printArray(myArray, numRows, numCols);


    int deleteRow = 1;
    int deleteCol = 2;
    deleteElement(myArray, numRows, numCols, deleteRow, deleteCol);

    cout << "2D Array after deleting element:" << endl;
    printArray(myArray, numRows, numCols);


    return 0;
}