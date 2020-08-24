#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
};
class LLfunctions{
public:

    Node* createNewNode(int data){
        Node* temp=new Node();
        temp->data=data;
        return temp;

    }
    Node* addNodeatEnd(int data,Node* head){
        if(head==NULL){
            head=createNewNode(data);
            return head;
        }

        Node* trvs=head;
        while(trvs->next!=NULL){
            trvs=trvs->next;
        }

        trvs->next=createNewNode(data);
        return head;
    }

    Node* addnodebegin(int data,Node* head){
        if(head==NULL){
            Node* temp=new Node();
            temp->data=data;
            head=temp;
            return head;
        }

        Node* temp=createNewNode(data);
        temp->next=head;
        return temp;

    }

    void printll(Node* head){
        Node* trvl=head;
        while(trvl!=NULL){
            cout<<trvl->data<<"->";
            trvl=trvl->next;
        }
    }

    int lengthofll(Node* head){
        Node* trvs=head;
        int cnt=0;
        while(trvs!=NULL){
            cnt++;
            trvs=trvs->next;
        }
        return cnt;
    }

    bool searchll(Node* head,int key){
        Node* current=head;
        while(current!=NULL){
            if(current->data==key){
                return true;
            }
            current=current->next;
        }
        return false;
    }
};
int main(){
    Node* head=NULL;
    LLfunctions ll;
    head=ll.addNodeatEnd(5,head);
    head=ll.addNodeatEnd(6,head);
    head=ll.addNodeatEnd(7,head);
    head=ll.addNodeatEnd(8,head);
    head=ll.addNodeatEnd(9,head);
    ll.printll(head);
    head=ll.addnodebegin(17,head);
    cout<<endl;
    ll.printll(head);
    cout<<endl;
    cout<<"length of linked list is "<<ll.lengthofll(head)<<endl;
    if(ll.searchll(head,7)){
        cout<<"element exists"<<endl;
    }else cout<<"element does not exists"<<endl;
    return 0;
}
