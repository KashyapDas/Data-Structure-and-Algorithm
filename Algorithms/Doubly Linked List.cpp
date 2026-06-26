#include<iostream>
using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next;
    public:
        Node(int data1)
        {
            prev = nullptr;
            data = data1;
            next = nullptr; 
        }
};

void createList(Node* &head, Node* &temp, int data)
{
    if(head == NULL)
    {
        head = temp = new Node(data);
    }
    else{
        Node* newNode = new Node(data);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
        newNode = nullptr;
    }
}

Node *tailDelete(Node* &head, Node* &temp)
{
    if(head->next == NULL)
    {
        delete head;
        head = temp = nullptr;
        return head;
    }
    Node* delNode = temp;
    temp = temp->prev;
    delete delNode;
    temp->next = delNode = nullptr;
    return head;
}

Node* headDelete(Node* &head)
{
    if(head->next == NULL)
    {
        delete head;
        head = nullptr;
        return head;
    }
    Node* newNode = head;
    head = head->next;
    delete newNode;
    newNode = nullptr;
    return head;
}

Node* kthInsert(Node* head, int position, int data)
{
    position = (position - 2);
    Node* temp = head;
    while(position!=0)
    {
        temp = temp->next;
        position--;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    temp = newNode= nullptr;
    return head; 
}

void traversal(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    int n;
    cout<<"Enter the number you want to insert : ";
    cin>>n;
    Node* head;
    Node* temp;
    head = temp = nullptr;
    while(n !=0 )
    {
        int data;
        cout<<"Enter the data : ";
        cin>>data;
        createList(head, temp, data);
        n--;
    }
    // print the list 
    traversal(head);
    // insert the element in the kth position
    int insert, position;
    cout<<"Enter the element you want to insert : ";
    cin>>insert;
    cout<<"Enter the position : ";
    cin>>position;
    head = kthInsert(head,position, insert);
    cout<<"After inserting the element - "<<endl;
    traversal(head);
    cout<<endl<<"====================================================="<<endl<<endl;

    // delete the last element of the list
    head = tailDelete(head, temp);
    cout<<"After deleting the last element : "<<endl;
    if(head==NULL)
    {
        cout<<"No element in the list..."<<endl;
    }
    else{
        traversal(head);
    }
    // delete the last element of the list
    head = headDelete(head);
    cout<<"After deleting the head element : "<<endl;
    if(head==NULL)
    {
        cout<<"There is no element in the list..."<<endl;
    }
    else{
        traversal(head);
    }
    

    return 0;
}