#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(ind d) : data(d), next(nullptr) {}
};

class StackLinkedList {
public:
    Node* top = nullptr;

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            cout << "Removed element Elements: " << temp->data;
            delete temp;
        }
    }

    void printList() {
        Node* currentNode = top;
        cout << "Linked List Elements: ";
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
};

int main() {
    StackLinkedList list;

    list.push(4);
    list.push(6);
    list.push(1);
    list.printList();
    list.pop();
    list.printList();


    return 0;
}