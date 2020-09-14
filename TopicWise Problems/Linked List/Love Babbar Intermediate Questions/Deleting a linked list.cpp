#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
};

Node* newNode(int data){
    Node* node=new Node();
    node->data=data;
    return node;
}

Node* insertInLL(Node* head,int data){
    if(head==NULL){
        head=newNode(data);
        return head;
    }
    Node* trvs=head;
    while(trvs->next!=NULL){
        trvs=trvs->next;
    }
    trvs->next=newNode(data);
    return head;
}

void deleteList(Node* head){
    Node* current=head;
    Node* next;

    while(current!=NULL){
        next=current->next;
        free(current);
        current=next;
    }

    head=NULL;
}

void printLL(Node* head){
    Node* trvs=head;
    while(trvs!=NULL){
        cout<<trvs->data<<" ";
        trvs=trvs->next;
    }
    cout<<"\n";
}

int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        head=insertInLL(head,x);
    }
    cout<<"Linked List Before Deletion :";
    printLL(head);
    cout<<"Linked List After Deletion :";
    return 0;
}
