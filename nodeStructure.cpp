struct node {
    int data;
    Node* next;

    static Node* createNode(int d){
        Node* newNode = new Node;
        newNode->data = d;
        newNode->next = nullptr;

        return newNode;
    }
};

int main(){
//Create Node

    Node* node1 = Node::createNode(1);
    Node* node2 = Node::createNode(1);
    Node* node3 = Node::createNode(2);
    Node* node4 = Node::createNode(3);
    Node* node5 = Node::createNode(5);
    Node* node6 = Node::createNode(8);
    Node* node7 = Node::createNode(13);

//Connect Node
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

//Access Data in Node
    cout << " Node 1 Data: " << node1->data << endl;
    cout << " Node 2 Data: " << node2->data << endl;
    cout << " Node 3 Data: " << node3->data << endl;
    cout << " Node 4 Data: " << node4->data << endl;
    cout << " Node 5 Data: " << node5->data << endl;
    cout << " Node 6 Data: " << node6->data << endl;
    cout << " Node 7 Data: " << node7->data << endl;
    
//Clean Up (free Memory)
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete node6;
    delete node7;


}