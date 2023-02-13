#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
}
Node* insert(int data){
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=0;i<data;i++){
        int input;
        cin>>input;
        Node *newNode = new Node(input);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}
 
int main(){
    int data;
    cout<<"enter the no of nodes: ";
    cin>>data;
    Node* head=insert(data);
    print(head);
    // cin>>data;
    // Node *newNode = new Node(data);
    // cin>>data1;
    // Node *newNode1 = new Node(data1);
    // newNode->next=newNode1;
    // print(newNode);

}