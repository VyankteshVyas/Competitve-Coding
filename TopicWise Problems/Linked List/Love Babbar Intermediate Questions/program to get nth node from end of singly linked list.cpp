#include<bits/stdc++.h>
using namespace std;

//check out it's time and space complexity
//iske andar maine 82 line mein head declare karte waqt head ko NULL se initialize nahi kiya tha.aur har bar nayi node banane ke baad head ko reinitialize nahi kiya tha  
//main function ke head se, iske kaarna bhi error aa gayi thi.
//https://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/
struct Node{
    int data;
    Node* next=NULL;
};

Node* insertNodeInLL(Node* head,int data){
    Node* node=new Node();
    node->data=data;
    if(head==NULL){
//        cout<<"cl"<<endl;
        head=node;
        return head;
    }
    Node* trvs=head;
    while(trvs->next!=NULL){
        trvs=trvs->next;
    }

    trvs->next=node;
//    cout<<"cl1"<<endl;
    return head;
}

Node* nthLastElement(Node* head,int n){
//    cout<<"called"<<endl;
    Node* singlePointer=head;
    Node* doublePointer=head;
    int singlePointercount=1,doublePointerCount=1;

    while(doublePointer!=NULL){
        if(doublePointer->next==NULL){
            doublePointer=NULL;

        }else{
            if(doublePointer->next->next==NULL){
                doublePointer=NULL;
                doublePointerCount+=1;
                singlePointercount+=1;
                singlePointer=singlePointer->next;
            }else{
                doublePointer=doublePointer->next->next;
                doublePointerCount+=2;
                singlePointercount+=1;
                singlePointer=singlePointer->next;
            }
        }
    }
//    cout<<"dp="<<doublePointerCount<<" sp="<<singlePointercount<<endl;

    if(doublePointerCount-n>=0){
        if(doublePointerCount-singlePointercount+1>=n){
            int diff=doublePointerCount-singlePointercount+1-n;
            while(diff!=0){
                singlePointer=singlePointer->next;
                diff--;
            }
            return singlePointer;
        }else{
            singlePointer=head;
            singlePointercount=1;
            while(singlePointercount!=doublePointerCount-n+1){
                singlePointer=singlePointer->next;
                singlePointercount++;
            }
            return singlePointer;
        }
    }
}

void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node* head=NULL;
    head=insertNodeInLL(head,20);
    head=insertNodeInLL(head,4);
    head=insertNodeInLL(head,15);
    head=insertNodeInLL(head,35);
//    printLL(head);
    Node* nthNode=nthLastElement(head,4);
    cout<<nthNode->data;
    return 0;
}
