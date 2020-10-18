#include<bits/stdc++.h>
using namespace std;

//struct Job
//{
//    int start, finish, profit;
//};
//
//bool jobComparator(Job j1,Job j2){
//    return (j1.finish<j2.finish);
//}
//
//int findMaxProfit(vector<Job> &v,int currJob,int startTime){
//    if(currJob==v.size()){
//        return 0;
//    }
//
//    if(startTime<=v[currJob].start){
//        return max(findMaxProfit(v,currJob+1,v[currJob].finish)+v[currJob].profit,findMaxProfit(v,currJob+1,startTime));
//    }
//
//    return findMaxProfit(v,currJob+1,startTime);
//}

struct Node {
    int data;
    Node* next=NULL;
};

Node* pushInLL(Node* head,int data){
    if(head==NULL){
        Node* temp=new Node();
        temp->data=data;
        head=temp;
        return head;
    }

    Node* trvs=head;
    while(trvs->next!=NULL){
        trvs=trvs->next;
    }
    Node* temp=new Node();
    temp->data=data;
    trvs->next=temp;
    return head;
}

bool checkPairProduct(Node* head,int product){
    Node* trvs=head;
    unordered_set<int> uset;
    while(trvs!=NULL){
        int nodeVal=trvs->data;
        if(product%nodeVal==0&&uset.find(product/nodeVal)!=uset.end()){
            cout<<nodeVal<<" "<<product/nodeVal;
            return true;
        }
        uset.insert(nodeVal);
        trvs=trvs->next;
    }
    return false;
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
    head=pushInLL(head,1);
    head=pushInLL(head,2);
    head=pushInLL(head,1);
    head=pushInLL(head,12);
    head=pushInLL(head,1);
    head=pushInLL(head,18);
    head=pushInLL(head,47);
    head=pushInLL(head,16);
    head=pushInLL(head,12);
    head=pushInLL(head,14);

    bool res = checkPairProduct(head, 24);
    if(!res){
        cout<<"Not found";
    }
    return 0;
}
