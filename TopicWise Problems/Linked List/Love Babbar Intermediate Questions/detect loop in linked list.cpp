#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
};

Node* newNode(int key)
{
    Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}

Node* detectLoop(Node* head){
    Node* slowPtr=head;
    Node* fastPtr=head;

    while(slowPtr!=NULL&&fastPtr!=NULL&&fastPtr->next!=NULL){
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;

        if(slowPtr==fastPtr){
            break;
        }
    }

    if(fastPtr==NULL){
        Node* node=NULL;
        return node;
    }

    Node* q=head;
    while(q!=slowPtr){
        q=q->next;
        slowPtr=slowPtr->next;
    }

    return slowPtr;

}

int main(){
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = head->next->next;

    Node* ans=detectLoop(head);
    if(ans==NULL){
        cout<<"No loop";
    }else cout<<ans->data;

    return 0;
}
