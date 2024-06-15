#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
        int data;
        Node* next;

        Node() {
            data = 0;
            next = nullptr;
        }
        Node(int data) {
            this->data = data;
            next = nullptr;
        }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int data) {
    Node* n = new Node(data);
    n->next = head;
    head = n;
}

void insertAtTail(Node* &tail, int data) {
    if(tail == nullptr) {
        tail = new Node(data);
        return;
    }
    Node* temp = tail;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    insertAtHead(head,0);
    insertAtHead(head,45);
    insertAtHead(node1,56);
    print(head);
    insertAtTail(tail,78);
    insertAtTail(tail,43);
    insertAtTail(tail,969);
    insertAtTail(tail,346);
    print(tail);

    Node * node2 = new Node();
    cout << node2->next <<  endl; 
    cout << node2->data << " " << node2->next << endl;
    insertAtTail(node2, 45);
    insertAtTail(node2, 78);
    insertAtTail(node2, 43);
    print(node2);

    Node * node3 = nullptr; 
    cout << node3 << endl;
    insertAtTail(node3,69);
    insertAtTail(node3,67);
    insertAtTail(node3,753);
    cout << node3->data << " " << node3->next << endl;
    print(node3);

    
    
    
    
    return 0;
}