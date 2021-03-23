void deleteNode(struct Node **head, int key)
{
    struct Node *p=NULL,*q=NULL;
    p=*head;
    while(p->data!=key)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    delete(p);
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    if(!*head_ref) return;
    Node *p=*head_ref,*next=NULL,*prev=NULL;
    do
    {
        next=p->next;
        p->next=prev;
        prev=p;
        p=next;
    }while(p!=*head_ref);
    //After While loop, p is pointing former first node 
    //and prev pointing former last node..
     p->next=prev; //for that last circular link.
    *head_ref=prev;
   
}
