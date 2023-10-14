#include <iostream>
using namespace std;


class StackArray {
    static const int MAX = 100;
    int top;
    int a[MAX];

public:
    StackArray() {
        top = -1;
    }

    bool isEmpty() {
        return (top < 0);
    }

    bool push(int element) {
        if(top >= (MAX - 1)) {
            cout << "Stack Overflow" << endl;
            return false;
        } else {
            a[++top] = element;
            cout << element << " pushed into stack" << endl;
            return true;
        }
    }

    int pop() {
        if(top < 0) {
            cout << "Stack Underflow " << endl;
            return 0;
        }else {
            int x = a[top--];
            return x;
        }
    }

    void printStackElements() {
        cout << " Elements are in Stack :::: ";
        for(int i = 0; i <= top; i++){
            cout << a[i];
        }
        cout <<endl;
    }
};

int main() {
    StackArray s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.printStackElements();
    cout << s.pop() << " Removed from stack " << endl;
    s.printStackElement();

    return 0;
    
}