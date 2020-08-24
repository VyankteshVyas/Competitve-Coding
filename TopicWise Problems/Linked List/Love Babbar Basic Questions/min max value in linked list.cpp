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

    Node* deletell(Node* head,int data){
        if(head==NULL){
            return head;
        }
        if(head->data==data){
            head=head->next;
            return head;
        }
        Node* trvs=head;
        while(trvs->next!=NULL){
            if(trvs->next->data==data){
                trvs->next=trvs->next->next;
                break;
            }
            trvs=trvs->next;
        }

        return head;
    }

    Node* nthnode(Node* head,int n){
        int m=1;
        Node* trvs=head;
        while(trvs!=NULL){
            if(m==n){
                return trvs;
            }
            m++;
            trvs=trvs->next;
        }
        return trvs;

    }

    void minmaxvalll(Node* head,int &minval,int &maxval){
        Node* trvs=head;
        minval=head->data;
        maxval=head->data;
        while(trvs!=NULL){
            if(trvs->data>maxval){
                maxval=trvs->data;
            }
            if(trvs->data<minval){
                minval=trvs->data;
            }
            trvs=trvs->next;
        }
    }
};
int main(){
    Node* head=NULL;
    LLfunctions ll;
    head=ll.addNodeatEnd(5,head);
    head=ll.addNodeatEnd(6,head);
    head=ll.addNodeatEnd(9,head);
    head=ll.addNodeatEnd(9,head);
    head=ll.addNodeatEnd(7,head);
    head=ll.addNodeatEnd(8,head);
    head=ll.addNodeatEnd(9,head);
    ll.printll(head);
    head=ll.addnodebegin(17,head);
    cout<<endl;
    ll.printll(head);
    cout<<endl;
    int minval=head->data;
    int maxval=head->data;
    ll.minmaxvalll(head,minval,maxval);
    cout<<"minimum and maximum value of linked list is"<<minval<<" "<<maxval<<endl;
    return 0;
}
