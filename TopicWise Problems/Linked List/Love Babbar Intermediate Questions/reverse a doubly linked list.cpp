/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
   Node* curr=head;
   Node* temp=NULL;
   while(curr!=NULL){
       temp=curr->prev;
       curr->prev=curr->next;
       curr->next=temp;
       curr=curr->prev;
   }
   
   if(temp!=NULL){
       head=temp->prev;
   }
   return head;
   
}