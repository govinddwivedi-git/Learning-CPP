#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        data = 0;
        next = nullptr;
        prev = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deleteHead(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
Node* convertToDoublyLL(vector<int>& arr)
{
    if (arr.empty())
    {
        return nullptr;
    }
    
    Node* head = new Node(arr[0]);
    Node* prevNode = head;
    
    for (int i = 1; i < arr.size(); i++)
    {
        Node* newNode = new Node(arr[i]);
        prevNode->next = newNode;
        newNode->prev = prevNode;
        prevNode = newNode;
    }
    
    return head;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {1,3,4,5,6,7,5,4};
    Node* head = convertToDoublyLL(arr);

    print(head);
    head = deleteHead(head);
    print(head);


    return 0;
}