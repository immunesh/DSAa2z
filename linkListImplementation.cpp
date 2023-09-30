#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {} 
};

Node* insert (Node* list, int data) {
    Node* newNode = new Node(data);
    newNode->next = nullptr;

    if(list == nullptr){
        return newNode;
    } else {
        Node* lastNode = list;
        while(lastNode->next != nullptr){
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        return list;
    }

}

Node* deleteBykey(Node* list, int key){
    cout << endl;
    cout << "Delete Element " << key << " from Linked List " << endl;
    Node* currentNode = list;
    Node* previousNode = nullptr;

    if (currentNode != nullptr && currentNode->data == key){
        list = currentNode->next;
        delete currentNode;
        cout << key << " found and deleted " << endl;
        return list;
    }

    while (currentNode != nullptr && currentNode->data != key) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr) {
        cout << key << "not found " << endl;
    }

    return list;
}

void printList(Node* list) {
    Node* currentNode = list;
    cout << "Linked List Elements: ";

    while (currentNode != nullptr) {
        cout << currentNode->data << " ";
        currentNode = currentNode->next;

    }
    cout << endl;

}

int main() {
    Node* list = nullptr;

    list = insert(list, 4);
    list = insert(list, 1);
    
    list = insert(list, 3);
    list = insert(list, 8);

    printList(list);
    list = deleteBykey(list, 1);
    printList(list);
    

}