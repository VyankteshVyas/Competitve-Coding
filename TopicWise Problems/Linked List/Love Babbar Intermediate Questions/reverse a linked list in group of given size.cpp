struct node *reverse (struct node *head, int k)
{   
    if(head==NULL){
        return NULL;
    }
    node* curr=head->next;
    node* prev=head;
    int count=2;
    while(count<=k&&curr!=NULL){
        node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        count++;
    }
    head->next=reverse(curr,k);
    return prev;
    
}
