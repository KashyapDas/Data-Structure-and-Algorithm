#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data)
        {
            this->data = data;
            next=nullptr;
        }
};

void createCircularLinkedList(Node* &head, Node* &temp, int data)
{
    if(head==NULL)
    {
        head = temp = new Node(data);
    }
    else{
        Node* newNode = new Node(data);
        temp->next = newNode;
        temp = newNode;
        newNode = nullptr;
    }
    temp->next = head;
}

void traversal(Node* head)
{
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(head != temp);
}

bool insertNode(Node* head, int after, int data)
{
    Node* temp = head;
    do{
        if(temp->data == after)
        {
            Node* newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
            newNode = nullptr;
            return true;
        }
        temp = temp->next;
    }
    while(head!=temp);
    return false;
}

bool deleteNode(Node* head, int element)
{
    Node* temp = head;
    do{
        if(temp->next->data == element)
        {
            Node* delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
            return true;
        }
        temp = temp->next;
    }
    while(head != temp);
    return false;
}

int main()
{
    Node* head = nullptr;
    Node* temp = nullptr;
    // creating a circular single linked list
    int n;
    cout<<"Enter the number of element you want to insert : ";
    cin>>n;
    while(n)
    {
        int data;
        cout<<"Enter the data : ";
        cin>>data;
        createCircularLinkedList(head, temp, data);
        n--;
    }
    // print the list
    cout<<"The elements present in the linked list are - "<<endl;
    traversal(head);

    // insert element after which element;
    int after, data;
    cout<<endl<<"Enter the element after which you want to insert : ";
    cin>>after;
    cout<<"Enter the data to insert : ";
    cin>>data;
    bool insert = insertNode(head, after, data);
    if(!insert){
        cout<<"Element not get inserted..."<<endl;
    }
    else{
        traversal(head);
    }
    // delete the element
    int element;
    cout<<endl<<"Enter the element you want to delete : ";
    cin>>element;
    bool isdelete = deleteNode(head,element);
    if(!isdelete)
    {
        cout<<"No element get deleted..."<<endl;
    }
    else{
        traversal(head);
    }
    return 0;
}