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

int main()
{
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr(arr);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}