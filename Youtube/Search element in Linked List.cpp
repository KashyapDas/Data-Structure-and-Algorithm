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

bool isExist(Node* head, int target)
{
    Node* temp = head;
    while(temp){
        if(temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr(arr);
    int target;
    cin>>target;
    bool result = isExist(head,target);
    if(result) cout<<"Element found in the linked list..."<<endl;
    else cout<<"Element not found in the linked list..."<<endl;
    return 0;
}