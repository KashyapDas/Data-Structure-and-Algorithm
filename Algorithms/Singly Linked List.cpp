#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

// Convert Array -> Linked List
Node* convertArr(vector<int>arr){
    Node* head;
    Node* mover;
    for(unsigned int i=0; i<arr.size(); i++){
        if(i==0)
        {
            head = new Node(arr[0]);
            mover = head;
        }
        else{
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }     
    }
    return head;
}

// print the element of the linked list
void printLinkedList(Node* head)
{
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// return the length of the linked list
int lengthofLinkedList(Node* head)
{
    int count=0;
    Node* temp = head;
    while(temp)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

// Head Element Deletion from the linked list
Node* headDeletion(Node* head)
{
    if(head==NULL) return NULL;
    Node* temp = head;
    head=head->next;
    delete temp;   
    return head;
} 

// Tail element Deletion from the linked list
Node* tailDeletion(Node* head)
{
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// Deletion from specific position
Node* specificPosition(Node* head, int k)
{
    if(head==NULL) return head;
    Node* temp = head;
    while(k!=2){
        temp = temp->next;
        k--;
    }
    Node* tempDelete = temp->next;
    temp->next = temp->next->next;
    delete tempDelete;
    return head;
}

// insert element at the head position
Node* headInsert(Node* head,int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    newNode = nullptr;
    delete newNode;
    return head;
}
// insert element at the tail position
Node* tailInsert(Node* head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode = temp = nullptr;
    delete newNode;
    delete temp;
    return head;
}
// insert element at specific position
Node* insertPosition(Node* head, int data, int k)
{
    Node* temp = head;
    while(k!=2)
    {
        temp = temp->next;
        k--;
    }
    Node* nextTemp = temp->next;
    Node* newNode = new Node(data);
    temp->next = newNode;
    newNode->next = nextTemp;
    temp = newNode = nextTemp = nullptr;
    delete temp;
    delete newNode;
    delete nextTemp;
    return head;
}


int main()
{
    vector<int>arr = {2,5,8,7,10,6,1};
    // conversion of arr to Linked List
    Node* head = convertArr(arr);
    // length of a linked list
    int lengthLinkedList = lengthofLinkedList(head);
    cout<<"Element in the Linked List present..."<<endl;;
    printLinkedList(head);
    // delete element from the specific position
    int pin;
    cout<<"Press 1 to insert and Press 2 to delete element : "<<endl;
    cin>>pin;
    // exit from the program
    if(pin==0){
        cout<<"Exit from the program...Thanks fro using us..."<<endl;
    } // insertion perform in the linked list
    else if(pin==1)
    {
        int data;
        int k;
        cout<<"Enter the data you want to insert : ";
        cin>>data;
        cout<<"Enter the position you want to enter the data : ";
        cin>>k;
        if(k==1)
        {
            head = headInsert(head,data);
            cout<<"After inserting element in the head position : "<<endl;
            printLinkedList(head);
        }
        else if(k==(lengthLinkedList+1))
        {
            head = tailInsert(head,data);
            cout<<"After inserting element in the tail position : "<<endl;
            printLinkedList(head);
        }
        else if((k>(lengthLinkedList+1)) || (k<1)){
            cout<<"Invalid input..."<<endl;
        }
        else{
            head = insertPosition(head,data,k);
            cout<<"After inserting element in the tail position : "<<endl;
            printLinkedList(head);
        }

    } // deletion will perform
    else if(pin==2)
    {
        int k;
        cout<<"Enter the position you want to delete : ";
        cin>>k;
        if(k>lengthLinkedList || k<1)
        {
            cout<<"Position out of bound..."<<endl;
        }
        else if(k==1)
        {
            head = headDeletion(head);
            printLinkedList(head);
        }  
        else if(k==lengthLinkedList)
        {
            head = tailDeletion(head);
            printLinkedList(head);
        } 
        else{
            head = specificPosition(head,k);
            printLinkedList(head);
        }
    }

    return 0;
}