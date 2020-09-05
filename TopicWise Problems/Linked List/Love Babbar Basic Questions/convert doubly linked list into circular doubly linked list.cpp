#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev=NULL;
    Node* next=NULL;
};

class DoublyLL{
public:
    Node* createNewNode(int data){
        Node* node=new Node();
        node->data=data;
        return node;
    }

    Node *addNodeAtBegin(int data,Node *head){
        if(head==NULL){
            Node* node=createNewNode(data);
            return node;
        }

        Node* node=createNewNode(data);
        head->prev=node;
        node->next=head;
        return node;
    }

    Node *addNodeAtEnd(int data,Node *head){
        if(head==NULL){
            Node *node=createNewNode(data);
            return node;
        }

        Node *itr=head;
        while(itr->next!=NULL){
            itr=itr->next;
        }
        Node *node=createNewNode(data);
        itr->next=node;
        node->prev=itr;
        return head;
    }

    int lengthOfDll(Node* head){
        int nodeCount=0;
        while(head!=NULL){
            head=head->next;
            nodeCount++;
        }
        return nodeCount;
    }

    void printDll(Node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }

    }
    
    void convertToCircularDll(Node *head){
        
        if(head==NULL){
            return;
        }
        
        Node* start=head;
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=start;
        start->prev=head;
        return;
    }

};

int main(){
    Node* head=NULL;
    DoublyLL ll;

    head=ll.addNodeAtEnd(5,head);
    head=ll.addNodeAtEnd(6,head);
    head=ll.addNodeAtEnd(7,head);
    head=ll.addNodeAtEnd(8,head);
    head=ll.addNodeAtEnd(9,head);
    ll.printDll(head);
    head=ll.addNodeAtBegin(17,head);
    cout<<endl;
    ll.printDll(head);
    cout<<"length of linked list is "<<ll.lengthOfDll(head);
    ll.convertToCircularDll(head);
    
    return 0;
}
